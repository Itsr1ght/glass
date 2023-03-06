#ifndef RENDERER
#define RENDERER

#include "window.hpp"

namespace Glass {

    class Renderer{

        public:
            Renderer(Window &window);
            ~Renderer();
            void render();
        private:
            Window m_window;
            void initiate_renderer();
    };

}

#endif
