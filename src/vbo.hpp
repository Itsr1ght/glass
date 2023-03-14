#ifndef VBO
#define VBO

#include <vector>

namespace Glass {

    class Vbo{
        public:
            Vbo(float *vertices);
            void bind();
            void unbind();
            ~Vbo();
        private:
            int * m_vertices;
            unsigned int m_vbo;
    };

}

#endif
