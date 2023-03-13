#include "vbo.hpp"
#include <algorithm>
#include <glad.h>
#include <vector>

/* needs to impliment */
namespace Glass {

    void Vbo::bind(float vertices[]){
        glGenBuffers(1, &m_vbo);
        //bind to array buffer
        glBindBuffer(GL_ARRAY_BUFFER, m_vbo);
        //add the vertices to vbo
        glBufferData(GL_ARRAY_BUFFER, sizeof(m_vertices), m_vertices, GL_STATIC_DRAW);
    }

    void Vbo::bind(){
        glGenBuffers(1, &m_vbo);
        glBindBuffer(GL_ARRAY_BUFFER, m_vbo);
    }

    void Vbo::unbind(){
        glBindBuffer(GL_ARRAY_BUFFER, 0);
    }

    Vbo::~Vbo(){
        this->unbind();
        glDeleteBuffers(1, &m_vbo);
    }

}
