#ifndef WINDOW
#define WINDOW

#include <string>

using namespace std;

struct Size {
        int width;
        int height;
};

class Window{

public:
        Window(Size size, std::string title);
        ~Window();
        void setSize(Size size) const;
        Size getSize() const;
        void setTitle(std::string title) const;
        std::string getTitle() const;
private:
        Size m_size;
        std::string m_title;

};

#endif
