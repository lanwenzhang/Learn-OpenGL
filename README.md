# Learn-OpenGL
This is a repository for assignments of Computer Graphics Programming in OpenGL with C++

## Environment
* Platform: Visual Studio 2022
* Language Standard: C++ 17
* Libaries:
  * GLEW
  * GLFW

## Notes
### 1 Rendering Pipeline
Vertex Shader → Tessellation → Geometry Shader → Verterx Post-processing → Primitive Assembly → Rasterization → Fragment Shader
![RenderingPipeline](https://github.com/user-attachments/assets/26f4099c-cb71-4dff-963a-06005b672044)

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
NDC: Normalized Device Coordinate

VAO: Vertex Array Object

VBO: Vertex Buffer Object 

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
