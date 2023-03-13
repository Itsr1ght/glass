#ifndef RAWMODEL
#define RAWMODEL

#include "ebo.hpp"
#include "vao.hpp"
#include "vbo.hpp"
#include <vector>

namespace Glass {

    class RawModel{

        public:
            RawModel(float vertices[], unsigned int indices[]);
            void bind();
            Vao get_id(); 
            ~RawModel();
        private:
            float *m_vertices;
            unsigned int *m_indices;
            Vao m_vao;
            Vbo m_vbo;
            Ebo m_ebo;
    };

}

#endif
