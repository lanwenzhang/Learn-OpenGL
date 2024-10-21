# 5 Texture Mapping

## 5.1 Load Texture File

### SOIL2
```
GLuint loadTexture(const char *texImagePath){
  GLuint textureID;
  textureID = SOIL_load_OGL_texture(texImagePath,
         SOIL_LOAD_AUTO, SOIL_CREATE_NEW_ID, SOIL_FLAG_INVERT_Y);
  if (textureID == 0) cout << "could not find texture file" << texImagePath << endl;
  return textureID;
}
```

### stb_image.h


## 5.2 Texture Coordinates



## 5.3 Texture Sampling
### 5.3.1 Uniform Sampler Variable
a variable designed for instructing a **texture unit on the graphics card** as to which texel to extract or “sample” from a loaded texture object
```
layout (binding=0) uniform sampler2D samp;      // 1 Declare a sampler variavle
...
glActiveTexture(GL_TEXTURE0);                   // 2 Active a texture unit
glBindTexture(GL_TEXTURE_2D, brickTexture);     // 3 Bind it to a particular texture object
```
### 5.3.2 Mipmap
