# 07 Lighting
## 7.1 Parameters
![image-2](https://github.com/user-attachments/assets/f97347cb-ed50-4033-bf7e-ac870e6d3d9b)


## 7.2 Lights
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

## 7.3 Materials



## 7.1 Lighting Models (Shading Models)

Ambient reflection + Diffuse reflection + Specular reflection

### 7.1.1 Gouraud Shading

### 7.1.2 Phong reflection model

### 7.1.3 Blinn-Phong Reflection Model
