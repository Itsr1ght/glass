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
            Vbo get_vbo();
            void bind();
            void unbind();
        private:
            //variables
            float *m_vertices;
            unsigned int *m_indices;
            Vbo m_vbo;
            Ebo m_ebo;
            //functions
            void initizialise_model(float* vertices, unsigned int *indices);

    };

}

#endif
