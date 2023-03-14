#include "vbo.hpp"
#include <algorithm>
#include <glad.h>
#include <vector>

/* needs to impliment */
namespace Glass {

    void Vbo::init(float *vertices){
        glGenBuffers(1, &m_vbo);
        //bind to array buffer
        glBindBuffer(GL_ARRAY_BUFFER, m_vbo);
        //add the vertices to vbo
        glBufferData(GL_ARRAY_BUFFER,
                sizeof(vertices),
                vertices,
                GL_STATIC_DRAW
                );
        m_vertices = vertices;
    }

    void Vbo::bind(){
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
