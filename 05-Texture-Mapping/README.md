# 5 Texture Mapping

## 5.1 Texturing Pipeline
## Load Texture File
### 5.1.1 SOIL2 library
```
GLuint loadTexture(const char *texImagePath){
  GLuint textureID;
  textureID = SOIL_load_OGL_texture(texImagePath,
         SOIL_LOAD_AUTO, SOIL_CREATE_NEW_ID, SOIL_FLAG_INVERT_Y);
  if (textureID == 0) cout << "could not find texture file" << texImagePath << endl;
  return textureID;
}
```

### 5.1.2 stb_image.h

Flip y-coordinate since OpenGL load the image from the lower left corner
```
stbi_set_flip_vertically_on_load(true);
```

## 5.2 Image Texturing
## 5.2 Filtering

### 5.2.1 Nearest Filtering
Rendeirng pixels < image pixels

### 5.2.2 Bilinear Filtering
Rendeirng pixels > image pixels

## 5.3 Wrapping and tiling
When UV coordinates>1
```
GL_REPEAT
GL_MIRRORED_REPEAT
GL_CLAMP_TO_EDGE
GL_CLAMP_TO_BORDER
```

## 5.3 Texture Sampling
**Uniform Sampler Variable**: a variable designed for instructing a **texture unit on the graphics card** as to which texel to extract or “sample” from a loaded texture object
```
layout (binding=0) uniform sampler2D samp;      // 1 Declare a sampler variavle
...
glGenTextures(GLsizei n, GLuint *textures);     // 2 Generate texture object to save texture data from the image    
glActiveTexture(GL_TEXTURE0);                   // 3 Active a texture unit in GPU
glBindTexture(GL_TEXTURE_2D, texture);          // 4 Bind it to a particular texture object
```
## 5.4 Mipmapping

### 5.4.1 Why use mipmap

### 5.4.2 How to generate mipmap
#### Step 1 Filtering → generate a blurry image with the same size
Mean filter

Gaussian filter

#### Step 2 Sampling → generate a smaller image by sampling the blurry image
Downsample

### 5.4.3 Use mipmap in OpenGL
```
GL_NEAREST_MIPMAP_NEAREST
GL_LINEAR_MIPMAP_NEAREST
GL_NEAREST_MIPMAP_LINEAR
GL_LINEAR_MIPMAP_LINEAR
```

## 5.5 Anisotropic Filtering
Mipmapped textures can sometimes appear more blurry than nonmipmapped textures, especially when the textured object is rendered at aheavily tilted viewing angle

## 5.6 Cube Maps

## 5.3 Bump Mapping 

## 10.1 Normal Mapping

### 10.1.1 Why tangetSpace

![whyTBN](https://github.com/user-attachments/assets/817ed449-b1b1-48b1-8929-d5e8340d2818)

### 10.1.2 TBN matrix calculation

![TBN](https://github.com/user-attachments/assets/2f4b937a-6f43-4ee7-b001-97a512e224d6)

![TBN2](https://github.com/user-attachments/assets/ef43fe11-b84e-4e01-baa3-1cf2dcc423d9)

## 10.2 Parallax Mapping
### 10.2.1 Parallax Mapping
![heightmap](https://github.com/user-attachments/assets/24c7808d-717e-4103-acc6-ceb010066eff)

```
vec2 ParallaxUV(vec2 uv, vec3 viewDir){

    viewDir = normalize();
    float height = texture(parallaxSampler.uv).r;
    vec2 offset = viewDir.xy/viewDir.z * height * heightScale;   // divided by z simulates the effect of view angle
    return uv-offset;

}

```
### 10.2.2 Steep Parallax Mapping
![parallax_mapping](https://github.com/user-attachments/assets/d89dc25b-fb41-4537-aa6f-9798f709ce77)


### 10.2.3 Parallax Occlusion Mapping
