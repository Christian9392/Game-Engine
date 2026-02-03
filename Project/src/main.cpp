// #include <iostream>
// int main () {
//     std::cout << "hello world" << std::endl;
// }

// #include <GLFW/glfw3.h>

// int main(void)
// {
//     GLFWwindow* window;

//     /* Initialize the library */
//     if (!glfwInit())
//         return -1;

//     /* Create a windowed mode window and its OpenGL context */
//     window = glfwCreateWindow(640, 480, "Hello world", NULL, NULL);
//     if (!window)
//     {
//         glfwTerminate();
//         return -1;
//     }

//     /* Make the window's context current */
//     glfwMakeContextCurrent(window);

//     /* Loop until the user closes the window */
//     while (!glfwWindowShouldClose(window))
//     {
//         /* Render here */
//         glClear(GL_COLOR_BUFFER_BIT);

//         glBegin(GL_TRIANGLES);
//         glVertex2f(-0.5f, -0.5f);
//         glVertex2f( 1.0f,  0.5f);
//         glVertex2f( 0.5f, -1.0f);
//         glEnd();

//         /* Swap front and back buffers */
//         glfwSwapBuffers(window);

//         /* Poll for and process events */
//         glfwPollEvents();
//     }

//     glfwTerminate();
//     return 0;
// }

#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include <iostream>


void framebuffer_size_callback(GLFWwindow* window, int width, int height) {
    glViewport(0, 0, width, height);
}

// Exit loop when user presses esc
void processInput(GLFWwindow *window) {
    if (glfwGetKey(window, GLFW_KEY_ESCAPE) == GLFW_PRESS) {
        glfwSetWindowShouldClose(window, true);
    }
}

int main()
{   
    // Initialize and link GLFW
    glfwInit();
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
    //glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE);


    // Create a window
    GLFWwindow* window = glfwCreateWindow(800, 600, "LearnOpenGL", NULL, NULL);
    if (window == NULL) {
        std::cout << "Failed to create GLFW window" << std::endl;
        glfwTerminate();
        return -1;
    }
    glfwMakeContextCurrent(window);


    // Initialize glad
    if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress)) {
    std::cout << "Failed to initialize GLAD" << std::endl;
    return -1;
    }

    // Set viewport
    glViewport(0, 0, 800, 600);
    glfwSetFramebufferSizeCallback(window, framebuffer_size_callback);

    // Main loop
    while(!glfwWindowShouldClose(window)) {

        // Check if esc is pressed
        processInput(window);

        glfwSwapBuffers(window);
        glfwPollEvents();
    }

    // Terminate glfw
    glfwTerminate();
    return 0;
}
