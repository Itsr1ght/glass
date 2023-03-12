#include "vao.hpp"
#include <glad.h>

namespace Glass {

    void Vao::bind(){
        glGenVertexArrays(1, &m_vao);  
        glBindVertexArray(m_vao);
    }

    void Vao::unbind(){
        glBindVertexArray(0);
    }
        
    unsigned int Vao::get_id(){
        return m_vao;
    }

    Vao::~Vao(){
        this->unbind();
        glDeleteVertexArrays(1, &m_vao);
    }

}
