#ifndef WINDOW
#define WINDOW

#include <glm/fwd.hpp>
#include <string.h>

class Window{
public:
        Window(int width, int height, std::string title) const;
        ~Window();
        void setSize(glm::vec2 size) const;
        glm::vec2 getSize();
        void setTitle(std::string title) const;
        std::string getTitle();
};

#endif
