#ifndef WINDOW
#define WINDOW

#include <string>
#include <glad.h>
#include <GLFW/glfw3.h>

namespace Glass {

    struct Size {
        int width;
        int height;
    };

    struct WindowProps {
        Size size;
        std::string title;
    };
    class Window{

        public:
            Window(WindowProps props);
            ~Window();
            void ClearColor();
            void SwapBuffer();
            bool IsWindowShouldClose();
            void setSize(Size size);
            Size getSize() const;
            void setTitle(std::string title);

            std::string getTitle() const;
        private:
            WindowProps m_props;
            GLFWwindow* m_window;
            void CreateWindow();
            void ChangeSize();
            void ChangeTitle();
    };

}

#endif
