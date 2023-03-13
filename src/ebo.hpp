#ifndef EBO
#define EBO

namespace Glass {

    class Ebo{
        public:
            Ebo() = default;
            void bind(unsigned int indices[]);
            void unbind();
            ~Ebo();
        private:
            unsigned int m_ebo;
    };

}

#endif
