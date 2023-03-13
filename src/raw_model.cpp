#include "raw_model.hpp"


namespace Glass {

    RawModel::RawModel(float vertices[], unsigned int indices[])
    {
       this->m_vao.bind();
       this->m_vbo.bind(vertices);
       this->m_ebo.bind(indices);
    } 
    
    Vao RawModel::get_id(){
        return m_vao;
    }

    RawModel::~RawModel(){
        this->m_ebo.unbind();
        this->m_vbo.unbind();
        this->m_vao.unbind();
    }

}
