#ifndef VBO
#define VBO

#include <vector>

namespace Glass {

    class Vbo{
        public:
            Vbo() = default;
            void bind(std::vector<int> vertices);
            void bind();
            void unbind();
            ~Vbo();
        private:
            int * m_vertices;
            unsigned int m_vbo;
    };

}

#endif
