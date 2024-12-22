
#import <Cocoa/Cocoa.h>
#import <CoreFoundation/CoreFoundation.h>
#import <AppKit/AppKit.h>

#import "NSDraggingSourceHelper.h"

class externalDragAndDrop
{

public:
    externalDragAndDrop()
    {
        draggingFinishedSelector = @selector(handleExternalDragAndDropButtonReleaseEvent:);
    }

    bool getIsDragging()
    {
        return dragging;
    }

    NSView *getNSViewForDragEvent()
    {
        NSWindow *nativeWindow = (__bridge NSWindow *)ofGetCocoaWindow();
        return [nativeWindow contentView];
    }

    bool externalDragAndDropFileInit(vector<string> files)
    {
        if (files.size() == 0 || getIsDragging())
            return false;
        dragging = true;

        NSView *view = getNSViewForDragEvent();

        if (view)
        {

            @autoreleasepool
            {

                if (auto event = [[view window] currentEvent])
                {
                    auto dragItems = [[NSMutableArray alloc] init];

                    for (int i = 0; i < files.size(); i++)
                    {
                        cout << "FILE:->" << files[i] << "\n";
                        string filename = files[i];

                        NSString *nsFilename = [NSString stringWithCString:filename.c_str()
                                                                  encoding:[NSString defaultCStringEncoding]];

                        auto fileURL = [NSURL fileURLWithPath:nsFilename];
                        auto dragItem = [[NSDraggingItem alloc] initWithPasteboardWriter:fileURL];

                        auto eventPos = [event locationInWindow];
                        auto dragRect = [view convertRect:NSMakeRect(eventPos.x - 16.0f, eventPos.y - 16.0f, 32.0f, 32.0f)
                                                 fromView:nil];
                        auto dragImage = [[NSWorkspace sharedWorkspace] iconForFile:nsFilename];
                        [dragItem setDraggingFrame:dragRect contents:dragImage];

                        NSLog(@"DRAGGED FILE IS %@", nsFilename);

                        [dragItems addObject:dragItem];
                        // [dragItem release];
                    }

                    auto helper = [[NSDraggingSourceHelper alloc] init];

                    [helper setSource:view andDraggingFinishedSelector:draggingFinishedSelector];

                    return [view beginDraggingSessionWithItems:dragItems
                                                         event:event
                                                        source:helper] != nullptr;
                }
            }
        }

        return false;
    }
    void handleExternalDragAndDropMotionNotify()
    {
    }

    void handleExternalDragAndDropButtonReleaseEvent()
    {
        cout << "DRAGGING FINISHED";
        dragging = false;
    }

private:
    SEL draggingFinishedSelector;
    bool dragging = false;
};
