# 5 Texture Mapping

## 5.1 Load Texture File

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
## 5.2 Filtering

### 5.2.1 Nearest Filtering

### 5.2.2 Bilinear Filtering


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

## 5.6 Wrapping and tiling
```
GL_REPEAT
GL_MIRRORED_REPEAT
GL_CLAMP_TO_EDGE
GL_CLAMP_TO_BORDER
```
## 5.7 Perspective Distortion
vertex shader
```
noperspective out vec2 tc
```
fragment shader
```
noperspective in vec2 tc;
```

