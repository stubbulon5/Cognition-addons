#include <vector>
#include <string>

class externalDragAndDrop {

public:
    externalDragAndDrop() {
    }

    bool getIsDragging() {
        return false;
    }

    bool externalDragAndDropFileInit(std::vector<std::string> files) {
        cout << "externalDragAndDropFileInit NOT SUPPORTED\n";
        return false;
    }
    void handleExternalDragAndDropMotionNotify() {
        cout << "handleExternalDragAndDropMotionNotify NOT SUPPORTED\n";
    }

    void handleExternalDragAndDropButtonReleaseEvent() {
        cout << "handleExternalDragAndDropButtonReleaseEvent NOT SUPPORTED\n";
    }

private:
    bool dragging = false;
};
