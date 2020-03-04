#version 410 core

in vec3 vtxcolor;

out vec4 FragColor;

void main()
{
    FragColor = vec4(vtxcolor, 1.0f);
}