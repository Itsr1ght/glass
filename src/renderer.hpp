#ifndef RENDERER
#define RENDERER

#include "raw_model.hpp"
#include "window.hpp"
#include <vector>

namespace Glass {

    class Renderer{

        public:
            Renderer(Window &window);
            ~Renderer();
            void add_to_renderer(RawModel model);
            void render();
        private:
            Window m_window;
            std::vector<RawModel> m_models;
            void initiate_renderer();
    };

}

#endif
