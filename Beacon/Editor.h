#ifndef EDITOR_H
#define EDITOR_H

#include <glfw3.h>

class Editor {
public:
    Editor();  // Constructor
    ~Editor(); // Destructor

    void Run(); // Main loop

private:
    GLFWwindow* window;
};

#endif // EDITOR_H
