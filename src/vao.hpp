#ifndef VAO
#define VAO

#include "vbo.hpp"
namespace Glass {

    class Vao{
        public:
            Vao() = default;
            void bind();
            void unbind();
            void link_vbo(Vbo vbo, unsigned int layout);
            ~Vao();
        private:
            unsigned int m_vao;
    };

}

#endif
