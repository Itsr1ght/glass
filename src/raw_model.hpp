#ifndef RAWMODEL
#define RAWMODEL

#include "ebo.hpp"
#include "vao.hpp"
#include "vbo.hpp"
#include <vector>

namespace Glass {

    class RawModel{

        public:
            RawModel(float vertices[], int indices[]);
            Vao get_id(); 
            ~RawModel();
        private:
            Vao m_vao;
            Vbo vbo;
            Ebo ebo;
    };

}

#endif
