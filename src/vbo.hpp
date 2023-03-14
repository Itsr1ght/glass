#ifndef VBO
#define VBO

#include <vector>

namespace Glass {

    class Vbo{
        public:
            Vbo() = default ;
            void init (float *vertices);
            void bind();
            void unbind();
            ~Vbo();
        private:
            float * m_vertices;
            unsigned int m_vbo;
    };

}

#endif
