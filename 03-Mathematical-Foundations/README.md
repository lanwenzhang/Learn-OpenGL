# 03 Mathmatics Foundation

## 3.1 Vector
### 3.1.1 Addition


### 3.1.2 Subtraction


### 3.1.3 Dot Product
![image](https://github.com/user-attachments/assets/50d8c25d-5a3e-4469-9d71-a598ede1bff2)

![image](https://github.com/lanwenzhang/Learn-Computer-Graphics/assets/86000552/13f992a3-ea4c-460b-9f53-5814f75857c2)

```
dot(a,b);
```
#### Application 1: Calculate the projection vector

![image](https://github.com/user-attachments/assets/60cae4cb-3ca2-411b-bded-fc9ca7216df8)

#### Application 2: Check the angle between two vectors
+: < 90

-: > 90

### 3.1.4 Cross Product
2D → get a scalar   3D → get a vector

![image](https://github.com/lanwenzhang/Learn-Computer-Graphics/assets/86000552/69d0e523-71a4-45fa-b36e-6a9075500a90)

![image](https://github.com/lanwenzhang/Learn-Computer-Graphics/assets/86000552/55fa0337-dc32-459d-9f53-74039b51792c)

![image](https://github.com/lanwenzhang/Learn-Computer-Graphics/assets/86000552/f53701f9-0357-469d-bf81-e474be308682)
```
cross(a, b);
```

#### Application 1: Calculate triangle area

#### Application 2: Check whether point is inside the triangle

## 3.2 Linear Algebra
### 3.2.1 Matrix Operation
![image](https://github.com/user-attachments/assets/9fd2969e-d2d1-4fed-ab16-7086165f62b8)

### 3.2.2 Transpose Matrix
![image](https://github.com/user-attachments/assets/454f1283-b61f-4a51-bbf5-5211b2370436)

### 3.2.3 Inverse Matrix
![image](https://github.com/user-attachments/assets/2f7ff69b-8165-4890-804f-b3d23de43b6e)

### 3.2.4 Vector and Matrix 
#### Column view
![image](https://github.com/user-attachments/assets/d60fd901-cde8-4c9d-a5e8-3102bf1999e5)


#### Row view
![image](https://github.com/user-attachments/assets/8187a3dd-72d0-4f7a-8a82-115a3491f19d)

### 3.2.5 Derterminant
#### Calculation
Determinant computes the volume of geometric object

#### Properties

### 3.2.6 Cofactor

### 3.2.7 Adjugate Matrix

## 3.3 Transformation

### 3.3.1 Model Transformation - Model Matrix
#### Scale
![image](https://github.com/user-attachments/assets/bc791496-9ae1-4ff1-8e99-f81fea1f9779)

![image](https://github.com/user-attachments/assets/1f727943-4142-436c-8dcb-86a29f0c667f)

#### Shear
![image](https://github.com/user-attachments/assets/b609e445-bff8-43f5-9fe2-8c8f1f3b8a29)

![image](https://github.com/user-attachments/assets/cac5173e-e84a-4b3b-8926-48b1a21421b8)

#### Rotate
![image](https://github.com/user-attachments/assets/b77a9f3c-f762-4304-8116-1d7334ce6153)


### 任意轴
![image](https://github.com/user-attachments/assets/a4f7a96b-a3b3-4b94-aee0-2c74e75cd695)

可以看作把原坐标系旋转得到一个新的坐标系R，P在新的坐标系R的坐标为（x, y, z）

Rodriguez formula:
![image](https://github.com/user-attachments/assets/0ed37e5c-af15-4f9c-b897-abe5d404321e)


#### Reflection
![image](https://github.com/user-attachments/assets/c025347a-0753-4eb3-a831-eeccad437419)

#### Homogeneous Coordinates
![image](https://github.com/user-attachments/assets/9715324e-b7fa-45a0-a647-2622a0e52329)

#### Transition
![image](https://github.com/user-attachments/assets/6bd6fa73-2040-4fca-b961-0fa1eafb2911)


### 3.3.2 View Transformation - View Matrix
#### Camera parameter:
initial position: (0, 0, 0)

local coodinates: direction: -z

aspect ratio: W/H

field of view: 

#### View matrix
transform matrix M: origin to random position, first rotate then translate

inverse transform matrix M<sup>-1</sup> (view matrix): random position to initial position, first translate then rotate

![image](https://github.com/lanwenzhang/Learn-Computer-Graphics/assets/86000552/4a49b8b5-d0e8-477f-afb4-c107f0ad6e8a)

##### Conclusion: 
View matrix is used to put the model and camera together to origin

View matrix is used to transform model from global coordinates to the camera local coordinates


### 3.3.3 Projection Transformation - Projection Matrix
#### Orthographic Projection - Orthographic Projection Matrix: use in the CAD software
![image](https://github.com/lanwenzhang/Learn-Computer-Graphics/assets/86000552/8276253a-9b7a-4b27-a0f7-a83cb46f6e4b)

#### Conclusion：
orthographic projection matrix is used to transform model from the camera local coordinates to the NDC coordinates

#### Perspective Projection - Perspective Projection Matrix: use in the game 
![image](https://github.com/lanwenzhang/Learn-Computer-Graphics/assets/86000552/186d1bb7-37f4-4fdc-a646-f8bdd215b85d)

![image](https://github.com/user-attachments/assets/6c258ba3-76f1-4bef-91a4-3fbf42c09256)

![image](https://github.com/user-attachments/assets/3b80dc6d-6c4a-4cf1-96b4-8b0ce995524a)

#### Conclusion：
perspective projection matrix is used to transform model from the camera local coordinates the clippling coordinates

## 3.4 GLM
### Rotate
rotate is always based on the local coordinate!!!
```
glm::rotate(glm:mat(1.0), radians, matrix)
```

### Translate
translate is always based on local coordinate and the scale!!!
