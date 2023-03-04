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

class Window{

public:
        Window(Size size, std::string title);
        ~Window();
	void ClearColor();
	void SwapBuffer();
	bool IsWindowShouldClose();
        void setSize(Size size);
        Size getSize() const;
        void setTitle(std::string title);
        std::string getTitle() const;
private:
        Size m_size;
        std::string m_title;
        GLFWwindow* m_window;
	void CreateWindow();
	void ChangeSize();
	void ChangeTitle();
};

}

#endif
