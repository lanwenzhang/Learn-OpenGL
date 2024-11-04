# 2 OpenGL Pipeline

## 2.1 Rendering Pipeline
Vertex Shader → Tessellation → Geometry Shader → Verterx Post-processing → Primitive Assembly → Rasterization → Fragment Shader

![RenderingPipeline](https://github.com/user-attachments/assets/26f4099c-cb71-4dff-963a-06005b672044)

## 2.2 Window

## 2.3 Shaders
### 2.3.1 GLSL syntax
Vector
```
vec3  = vec3
```

Swizzling
```
vec4 color = vec4(0.8, 0.7, 0.6, 1.0);
vec4 param0 = color.xyzz   //(0.8, 0.7, 0.6, 0.6）
```

```
vec4 color = vec4(0.8, 0.7, 0.6, 1.0);
vec4 param0 
```
### 2.3.2 Variables
#### Attributes - get the data from VBO based on VAO description
Vertex shader
```
layout(location = 0) in vec3 aPos;
```

```
in vec3 aPos;
```

Fragment shader
```
in vec3 color
```

#### 2.3.2.2 Output variables


#### 2.3.2.3 Uniform 
Used by all the shaders 

Pass variables between CPU and shaders

