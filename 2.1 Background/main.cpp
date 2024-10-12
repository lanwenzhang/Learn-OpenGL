//GLEW header must be infront of GLFW
#include <GL\glew.h>
#include <GLFW\glfw3.h>
#include <iostream>

using namespace std;

//Window initialization function
void init(GLFWwindow* window) { }

//Window display function
void display(GLFWwindow* window, double currentTime)
{
	//Color of clear background
	glClearColor(1.0, 0.0, 0.0, 1.0);

	//Fill in the buffer with the clear color
	glClear(GL_COLOR_BUFFER_BIT);
}

int main(void)
{
	// Initial the glfw
	if (!glfwInit())
	{
		exit(EXIT_FAILURE);
	}

	//Compatibility version
	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 4);		
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);		

	//GLFW create the window
	GLFWwindow* window = glfwCreateWindow(600, 600, "Create Window", NULL, NULL);

	//link the window with OpenGL contexts
	glfwMakeContextCurrent(window);

	// Initial the glew
	if (glewInit() != GLEW_OK)
	{
		exit(EXIT_FAILURE);
	}
	glfwSwapInterval(1);

	init(window);

	//Render loop
	while (!glfwWindowShouldClose(window))
	{
		//Display function
		display(window, glfwGetTime());

		//Swap the back buffer and front buffer
		glfwSwapBuffers(window);

		//Deal with window events e.g. press the close button
		glfwPollEvents();
	}

	glfwDestroyWindow(window);
	glfwTerminate();
	exit(EXIT_SUCCESS);
}
