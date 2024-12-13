# 10 Enhancing Surface Details - Bump Mapping

## 10.1 Normal mapping

### 10.1.1 Why tangetSpace

![whyTBN](https://github.com/user-attachments/assets/817ed449-b1b1-48b1-8929-d5e8340d2818)

### 10.1.2 TBN matrix calculation

![TBN](https://github.com/user-attachments/assets/2f4b937a-6f43-4ee7-b001-97a512e224d6)

![TBN2](https://github.com/user-attachments/assets/ef43fe11-b84e-4e01-baa3-1cf2dcc423d9)

## 10.2 Height mapping / Parallax mapping

![heightmap](https://github.com/user-attachments/assets/24c7808d-717e-4103-acc6-ceb010066eff)

```
vec2 ParallaxUV(vec2 uv, vec3 viewDir){

    viewDir = normalize();
    float height = texture(parallaxSampler.uv).r;
    vec2 offset = viewDir.xy/viewDir.z * height * heightScale;   // divided by z simulates the effect of view angle
    return uv-offset;

}

```
