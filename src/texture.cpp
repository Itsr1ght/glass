#include "texture.hpp"
#include <stb/stb_image.h>
#include <glad.h>
#include <iostream>

namespace Glass {

    Texture::Texture(std::string file_path){
        this->load_texture(file_path); 
    }

    TextureProps Texture::GetTextureProperty(){
        return this->tex_props;
    }

    void Texture::load_texture(std::string file_path){
        this->texture_data = stbi_load(file_path.c_str(),
                &tex_props.width,
                &tex_props.height,
                &tex_props.nrchannel,
                0
                );
        glGenTextures(1, &m_texture);  
        glActiveTexture(GL_TEXTURE0);
        glBindTexture(GL_TEXTURE_2D, m_texture);
        if (this->texture_data){
            glTexImage2D(GL_TEXTURE_2D,
                    0,
                    GL_RGB,
                    this->tex_props.width,
                    this->tex_props.height,
                    0,
                    GL_RGB,
                    GL_UNSIGNED_BYTE,
                    this->texture_data
            );
            glGenerateMipmap(GL_TEXTURE_2D);
        }
        else {
            std::cout << "Failed to Load Texture" << std::endl;
        }
        stbi_image_free(this->texture_data);
    }

    Texture::~Texture(){
    
    }

}
