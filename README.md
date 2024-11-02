# Learn-OpenGL
These are learning notes and code repository for the book "Computer Graphics Programming in OpenGL with C++"

## Environment
* Platform: Visual Studio 2022
* Language Standard: C++ 17
* Libaries:
  * GLEW → Extension
  * GLFW → Framework: create and manage windows
  * GLM → Mathematics：vectors and matrix
  * SOIL2 → Load image

## Notes
### 0 OpenGL Type

| C Type  | Bitdepth	 | Description | Common Enum |
| ------------- | ------------- | ------------- | ------------- |
| GLint  | 	32 | Signed, 2's complement binary integer  | 	GL_INT  | 
| GLuint  | 32  | Unsigned binary integer  | GL_UNSIGNED_INT  |

### 1 Header File
cmath


### 2 OpenGL Basic Functions

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

### 3 VAO and VBO 
#### 3.1 NDC
NDC: Normalized Device Coordinate

#### 3.2 VBO
VBO: Vertex Buffer Object → A memory buffer in GPU

Create VBO
```
glGenBuffers(GLsizei n, Gluint *buffers);
```
Delete VBO
```
glDeleteBuffers(GLsizei n, Gluint *buffers)
```
Bind VBO → Bind VBO to the current OpenGL state machine slot
```
glBindBuffer(GLenum target, GLuint buffer)
```
Update VBO data → Update data to current VBO and create memory in the display card
```
glBufferData(	GLenum target, GLsizeiptr size, const void * data, GLenum usage)
```

#### 3.3 VAO
VAO: Vertex Array Object

Create VAO
```
glGenVertexArrays(GLsizei n, GLuint *arrays)
```

Bind VAO
```
glBindVertexArray(GLuint array)
```

Delete VAO
```
glDeleteVertexArrays(GLsizei n, const GLuint *arrays)
```

Update VBO information in VAO
```
glVertexAttribPointer(GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, const void * pointer)
```

### 4 Shader
VertexShader
```
#version 460 core
layout(location = 0) in vec3 aPos; //Vertex properties input
void main()
{
   gl_Position = vec4(aPox, aPos.y, aPos.z, 1.0);
}
```

FragmentShader

GLSL: Graphic Library Shader Language
