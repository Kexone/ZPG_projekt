#version 400

in vec4 ex_worldPosition;
in vec3 ex_worldNormal;

out vec4 out_Color;
//uniform vec3 lightPosition;
void main () {

vec3 lightVector= normalize(vec3(-1.3, 1.0, 1));
float dot_product = max(dot(lightVector, normalize(ex_worldNormal)), 0.0);
vec4 diffuse = dot_product * vec4( 0.385, 0.647, 0.812, 1.0);
vec4 ambient = vec4( 0.1, 0.1, 0.1, 1.0);
//out_Color = vec4(1.0f, 1.0f, 1.0f, 1.0f);
out_Color = ambient + diffuse;
}
