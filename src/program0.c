#include <stdio.h>
#include <stdlib.h>

#include <GLFW/glfw3.h>

/* minimal code to instantiate a window using glfw3 */

int main(int argc, char const *argv[])
{
    if (!glfwInit())
    {
        fprintf(stderr, "can't init glfw.\n");
        return -1;
    }

    glfwWindowHint(GLFW_RESIZABLE, GLFW_TRUE);

    GLFWwindow *window = glfwCreateWindow(500, 500, "Hello World", NULL, NULL);

    if (window == NULL)
    {
        fprintf(stderr, "can't create window.\n");
        return -1;
    }

    while (!glfwWindowShouldClose(window)) {
        glfwSwapBuffers(window);
        glfwPollEvents();
    }
    
    return 0;
}
