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
        
    void Vao::link_vbo(Vbo vbo, unsigned int layout){
        vbo.bind();
        glVertexAttribPointer(layout, 3, GL_FLOAT, GL_FALSE, 0, (void*)0);
        vbo.unbind();
    }

    Vao::~Vao(){
        this->unbind();
        glDeleteVertexArrays(1, &m_vao);
    }

}
