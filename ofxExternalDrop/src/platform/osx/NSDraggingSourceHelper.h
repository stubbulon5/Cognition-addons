
#pragma once
#import <Cocoa/Cocoa.h>
#import <CoreFoundation/CoreFoundation.h>
#import <AppKit/AppKit.h>

@interface NSDraggingSourceHelper : NSObject<NSDraggingSource> 

typedef int (*DraggingCompletedBlock)();


- (void)setSource:(NSView*)initiator andDraggingFinishedSelector:(SEL)completionSelector;

// Declares the types of operations the source allows to be performed.
- (NSDragOperation)draggingSession:(NSDraggingSession *)session 
sourceOperationMaskForDraggingContext:(NSDraggingContext)context;

// Invoked when the dragging session has completed.
- (void)draggingSession:(NSDraggingSession *)session 
           endedAtPoint:(NSPoint)screenPoint 
              operation:(NSDragOperation)operation;

// Invoked when the drag moves on the screen.
- (void)draggingSession:(NSDraggingSession *)session 
           movedToPoint:(NSPoint)screenPoint;              

// Invoked when the drag will begin.
- (void)draggingSession:(NSDraggingSession *)session 
       willBeginAtPoint:(NSPoint)screenPoint;

// Returns whether the modifier keys will be ignored for this dragging session.
- (BOOL)ignoreModifierKeysForDraggingSession:(NSDraggingSession *)session;

@end

/*
hold shift to drag ???
crashes
cross compilation
testing on other daws
then generate midi file, etc
*/