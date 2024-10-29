# 6-1-sphere

## Demo
![image](https://github.com/user-attachments/assets/e90408bf-b13e-4208-b097-ebf6124faf8c)

## 1 Geometry
Create a C++ class for a sphere

## 1.1 Subdivision
![image](https://github.com/user-attachments/assets/cfaee0a0-dd2a-4896-8887-ffd1fed2e2f5)

Slice the sphere into a number of parts, the number of parts are controlled by precision
```
void Sphere::init(int prec){}
```

## 1.2 Calculate the number of vertex and indience
Each vertice on the left corner generate two triangles

![image](https://github.com/user-attachments/assets/6ce8272a-359a-452f-a78d-252dc987f8f1)


The number of vertices
```
numVertices = (prec + 1) * (prec + 1);
```

The number of indices

![image](https://github.com/user-attachments/assets/d89f0b9d-b708-45ab-a56e-6528a895dfb3)

```
numIndices = prec * prec * 6;
```


## 2 Pipeline 
