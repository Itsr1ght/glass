#include "raw_model.hpp"

namespace Glass {

    RawModel::RawModel(float vertices[], unsigned int indices[], Shader &shader)
        :m_vertices(vertices), m_indices(indices), m_shader(shader)
    {
        this->initizialise_model(vertices, indices);
    }
    
    void RawModel::initizialise_model(float* vertices, unsigned int *indices){

        this->m_vbo.init(vertices);
        this->m_ebo.init(indices);
    }

    Vbo RawModel::get_vbo(){
        return this->m_vbo;
    }

    void RawModel::bind(){
        this->m_vbo.bind();
        this->m_ebo.bind();
    }
   
    void RawModel::use_shader(){
        m_shader.use();
    }

    void RawModel::unbind(){
        this->m_vbo.unbind();
        this->m_ebo.unbind();
    }

}
