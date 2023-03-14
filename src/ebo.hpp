#ifndef EBO
#define EBO

namespace Glass {

    class Ebo{
        public:
            Ebo() = default;
            void init(unsigned int *indices);
            void bind();
            void unbind();
            ~Ebo();
        private:
            unsigned int m_ebo;
    };

}

#endif
