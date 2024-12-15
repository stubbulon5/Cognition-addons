

#include "NSDraggingSourceHelper.h"

//typedef (^DraggingCompletedBlock)();

@implementation NSDraggingSourceHelper



- (void)setSource:(NSView*)initiator andDraggingFinishedSelector:(SEL)completionSelector;
{
  mInitiator = initiator;
  mCompletionSelector = completionSelector;
}

// Declares the types of operations the source allows to be performed.
- (NSDragOperation) draggingSession:(NSDraggingSession *)session
  sourceOperationMaskForDraggingContext:(NSDraggingContext)context
{
  // This combination of flags gives the behaviour we want, somehow:
  //   - it uses move pointer by default (no plus)
  //   - plus appears when pressing Alt and drop is allowed
  //   - pointer stays unchanged when pressing Cmd and drop is allowed
  //   - pointer stays unchanged when pressing Ctrl and drop is not allowed
  //
  // If using NSDragOperationEvery, this is not the case as we then get
  // the plus pointer by default.
          return NSDragOperationCopy;

/*
    switch(context) {
        case NSDraggingContextOutsideApplication:
          return NSDragOperationCopy |
                NSDragOperationMove |
                NSDragOperationGeneric |
                NSDragOperationMove |
                NSDragOperationDelete;
            break;
 
        case NSDraggingContextWithinApplication:
        default:
            return NSDragOperationNone;
            break;
    }

*/
}



// Invoked when the dragging session has completed.
- (void)draggingSession:(NSDraggingSession *)session 
           endedAtPoint:(NSPoint)screenPoint 
              operation:(NSDragOperation)operation
{
  // Our view doesn't receive a mouse up when the drag ends so we need to generate one here and send it...
      if (auto* cgEvent = CGEventCreateMouseEvent (nullptr, kCGEventLeftMouseUp, CGPointMake (screenPoint.x, screenPoint.y), kCGMouseButtonLeft))
          if (id e = [NSEvent eventWithCGEvent: cgEvent]) {
            [mInitiator mouseUp: e];
            [mInitiator.window makeKeyAndOrderFront:mInitiator.window];            
          }
              
       // todo : fix       
  //  [self performSelector:@selector(mCompletionSelector:)]; 
}              

// Invoked when the drag moves on the screen.
- (void)draggingSession:(NSDraggingSession *)session 
           movedToPoint:(NSPoint)screenPoint 
{
}          

// Invoked when the drag will begin.
- (void)draggingSession:(NSDraggingSession *)session 
       willBeginAtPoint:(NSPoint)screenPoint
{
}       

// Returns whether the modifier keys will be ignored for this dragging session.
- (BOOL)ignoreModifierKeysForDraggingSession:(NSDraggingSession *)session 
{
  return false;
}

NSView* mInitiator;
SEL mCompletionSelector;
@end