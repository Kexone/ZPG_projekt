#include "Texture.h"
#include "Shader.h"


Texture::Texture()
{
	//this->path = path;
	//loadTexture();
}

Texture::~Texture()
{
	delete this;
}


GLuint Texture::loadTexture()
{

	tex_2d = SOIL_load_OGL_texture
		(
		"PuddleJumper_D.tga",
		SOIL_LOAD_RGB,
		SOIL_CREATE_NEW_ID,
		SOIL_FLAG_MIPMAPS | SOIL_FLAG_INVERT_Y | SOIL_FLAG_NTSC_SAFE_RGB | SOIL_FLAG_COMPRESS_TO_DXT
		);
	if (0 == tex_2d)
	{
		printf("SOIL loading error: '%s'\n", SOIL_last_result());
	}

	return tex_2d;
	//glActiveTexture(GL_TEXTURE0);
	
	//glUniform1i(glGetUniformLocation(shader->getID(), "textura"), 0);

}