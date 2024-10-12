# Learn-OpenGL
This is a repository for assignments of Computer Graphics Programming in OpenGL with C++

## Environment
* Platform: Visual Studio 2022
* Language Standard: C++ 17
* Libaries:
  * GLEW
  * GLFW

## Notes
### 1 OpenGL Basic Functions

Set the viewport size
```
glViewport(GLint x, GLint y, GLsizei width, GLsizei height)
```

Set the canvas color
```
glClearColor(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha)
```

Clear the canvas
```
glClear(GL_COLOR_BUFFER_BIT)
```

Swap the back buffer and front buffer
```
void glfwSwapBuffers(GLFWwindow* window)
```
