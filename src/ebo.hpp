#ifndef EBO
#define EBO

namespace Glass {

    class Ebo{
        public:
            Ebo(unsigned int *indices);
            void bind();
            void unbind();
            ~Ebo();
        private:
            unsigned int m_ebo;
    };

}

#endif
