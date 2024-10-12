#include <GL\glew.h>
#include <GLFW\glfw3.h>
#include <iostream>

using namespace std;

#define numVAOs 1

//Define rendering 
GLuint renderingProgram;                //Gluint means unsigned int in OpenGL

//Define buffer area
GLuint vao[numVAOs];

//Define shader function
GLuint createShaderProgram()
{
	//Define vertex shader
	const char* vshaderSource =
		"#version 430    \n"
		"void main(void) \n"
		"{ gl_Position = vec4(0.0, 0.0, 0.0, 1.0); }";

	//define fragment shader
	const char* fshaderSource =
		"#version 430    \n"
		"out vec4 color; \n"						
		"void main(void)\n"
		"{ color = vec4(0.0, 0.0, 1.0, 1.0); }";	//Define the fragment color


	GLuint vShader = glCreateShader(GL_VERTEX_SHADER);
	GLuint fShader = glCreateShader(GL_FRAGMENT_SHADER);
	
	GLuint vfprogram = glCreateProgram();

	glShaderSource(vShader, 1, &vshaderSource, NULL);
	glShaderSource(fShader, 1, &fshaderSource, NULL);
	//Compile shader
	glCompileShader(vShader);
	glCompileShader(fShader);

	//Add shader to program
	glAttachShader(vfprogram, vShader);
	glAttachShader(vfprogram, fShader);

	//Link program
	glLinkProgram(vfprogram);

	return vfprogram;
}

//Window initialization function
void init(GLFWwindow* window)
{

	renderingProgram = createShaderProgram();
	// Create Buffer
	glGenVertexArrays(numVAOs, vao);
	glBindVertexArray(vao[0]);
}

//Window display function
void display(GLFWwindow* window, double currentTime)
{
	glUseProgram(renderingProgram);

	//Point size
	glPointSize(50.0f);

	//Draw Point
	glDrawArrays(GL_POINTS, 0, 1);
}

int main(void)
{

	if (!glfwInit())
	{
		exit(EXIT_FAILURE);
	}

	//OpenGL Compatibility version
	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 4);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);

	//GLFW create the window
	GLFWwindow* window = glfwCreateWindow(600, 600, "Create Point", NULL, NULL);

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
