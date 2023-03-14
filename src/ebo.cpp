#include "ebo.hpp"
#include <glad.h>

/* needs to impliment */
namespace Glass {

    void Ebo::init(unsigned int *indices){
        glGenBuffers(1, &m_ebo);
        glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, m_ebo);
        glBufferData(
                GL_ELEMENT_ARRAY_BUFFER,
                sizeof(&indices),
                indices,
                GL_STATIC_DRAW
                );
    }

    void Ebo::bind(){
        glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, m_ebo);
    }

    void Ebo::unbind(){
        glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, 0);
    }

    Ebo::~Ebo(){
        this->unbind();
        glDeleteBuffers(1, &m_ebo);

    }

}
