#ifndef VAO
#define VAO

namespace Glass {

    class Vao{
        public:
            Vao() = default;
            void bind();
            void unbind();
            unsigned int get_id();
            ~Vao();
        private:
            unsigned int m_vao;
    };

}

#endif
