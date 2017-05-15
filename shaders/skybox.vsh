#version 450

layout(location = 0) in vec3 position_in;
layout(location = 3) in vec2 uv_in;

uniform mat4 model_matrix;
uniform mat4 view_matrix;
uniform mat4 projection_matrix;

out vec2 texcoord;

void main() {
	texcoord = uv_in;

	mat4 mvp = projection_matrix * view_matrix * model_matrix;    
    gl_Position = mvp * vec4(position_in, 1);
}