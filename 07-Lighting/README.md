# 07 Lighting
## 7.1 Lights
Global ambient light
```
float globalAmbient[4] = { 0.6f, 0.6f, 0.6f, 1.0f };
```

Directional light
```
float dirLightAmbient[4] = { 0.1f, 0.0f, 0.0f, 1.0f }; 
float dirLightDiffuse[4] = { 1.0f, 0.0f, 0.0f, 1.0f }; 
float dirLightSpecular[4] = { 1.0f, 0.0f, 0.0f, 1.0f }; 
float dirLightDirection[3] = { 0.0f, 0.0f, -1.0f };
```

Spot light
```

```

## 7.2 Materials



## 7.3 Lighting Models (Shading Models)
Ambient reflection + Diffuse reflection + Specular reflection

### Ambient reflection

### Diffuse reflection

### Specular reflection

### 7.3.1 Gouraud Shading

#### Normals view transformation
![image](https://github.com/user-attachments/assets/233aaa91-221e-4d9a-8579-a02221cc0609)

### 7.3.2 Phong reflection model

### 7.3.3 Blinn-Phong Reflection Model
