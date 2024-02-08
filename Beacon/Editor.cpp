#include "Editor.h"
#include <stdexcept> // Include this header for std::runtime_error
#include <glfw3.h>

Editor::Editor() {
    // Initialize the library
    if (!glfwInit()) {
        // Initialization failed
        throw std::runtime_error("GLFW initialization failed");
    }

    // Create a windowed mode window and its OpenGL context
    window = glfwCreateWindow(640, 480, "Hello World", nullptr, nullptr);
    if (!window) {
        glfwTerminate();
        throw std::runtime_error("Failed to create GLFW window");
    }

    // Make the window's context current
    glfwMakeContextCurrent(window);
}


Editor::~Editor() {
    glfwDestroyWindow(window);
    glfwTerminate();
}

void Editor::Run() {
    // Loop until the user closes the window
    while (!glfwWindowShouldClose(window)) {
        // Render here

        // Swap front and back buffers
        glfwSwapBuffers(window);

        // Poll for and process events
        glfwPollEvents();
    }
}
