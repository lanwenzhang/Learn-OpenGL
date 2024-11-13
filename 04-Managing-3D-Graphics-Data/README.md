# 04 Managing 3D Graphics Data

## Camera

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
