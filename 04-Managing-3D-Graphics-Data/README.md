# 04 Managing 3D Graphics Data

## 4.1 Camera and controller

### 4.1.1 Camera
#### Othographic Camera

#### Perspective Camera

### 4.1.2 Controller
#### Track Ball Controller

#### Game Camera Controller


## 4.2 Z-buffer

```
glEnable(GL_DEPTH_TEST);

glDepthFunc(GL_LESS); // small depth value pass the test
```

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
