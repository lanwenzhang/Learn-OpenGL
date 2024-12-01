# 04 Managing 3D Graphics Data

## 4.1 Camera and controller

### 4.1.1 Camera
#### Othographic Camera

#### Perspective Camera

### 4.1.2 Controller
#### Track Ball Controller

Yaw: global y-axis

Pitch: local x-axis(right vector)

#### Game Camera Controller


## 4.2 Depth Test

### 4.2.1 Enable Depth Test
```
glEnable(GL_DEPTH_TEST); // depth test

glDepthFunc(GL_LESS); // small depth value pass the test
```

### 4.2.2 Depth Mask

```
glDepthMask(GL_TRUE); // depth write
```

### 4.2.3 Linear Depth

```
float Zndc = gl_FragCoord.z * 2.0 - 1.0;

float linearDepth = 2 * near / (far + near - Zndc*(far - near));

vec3 finalColor = vec3(linearDepth, linearDepth, linearDepth);
```

### 4.2.4 Polygon Offset

solve z-fighting 

```
glEnable(GL_PLOYGON_OFFSET_FILL);  //face

glPolygonOffset(0.0f, 1.0f);

```

## 4.3 Stencil Test

```
glEnable(GL_STENCIL_TEST);

glStencilFunc();

glStencilMask(GLuint mask);

glStencilOp(GLenum sfail, GLenum dpfail, GLenum dppass);

```


## 4.4 Blending


## 4.5 Face Culling


## 4.6 Framebuffer

Pass 1 and Pass 2 in the same frame

offscreen rendering

frame buffer includes color buffer,  depth buffer, stencil buffer, etc


## 4.8 Matrix Stack

makes available a new entry on the top of the stack
```
push()
```
removes (and returns) the top matrix
```
pop()
```
returns a reference to the matrix at the top of the stack, without removing it
```
top()
```



## 4.9 Optimization
### 4.9.1 Minimizing Dynamic Memory Allocation

Avoid 

• instantiating objects

• declaring variables

### 4.9.2 Pre-Computing the Perspective Matrix

### 4.9.3 Back-Face Culling
