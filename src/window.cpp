#include "window.hpp"
#include <GLFW/glfw3.h>
#include <cstddef>
#include <iostream>
#include <cstdlib>

namespace Glass {

    Window::Window(WindowProps props)
        :m_props(props)
    {
        this->CreateWindow();
    }

    void Window::ClearColor(){
        glClearColor(0.3f, 0.3f, 0.3f, 1.0f);
        glEnable(GL_DEPTH_TEST);
        glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    }

    void Window::SwapBuffer(){
        glfwSwapBuffers(this->m_window);
        glfwPollEvents();
    }

    bool Window::IsWindowShouldClose(){
        return glfwWindowShouldClose(this->m_window);
    }

    void Window::setSize(Size size){
        this->m_props.size = size;
        this->ChangeSize();
    }

    Size Window::getSize() const{
        return this->m_props.size;
    }

    void Window::setTitle(std::string title){
        this->m_props.title = title;
        this->ChangeTitle();
    }

    std::string Window::getTitle() const{
        return this->m_props.title;
    }

    void Window::CreateWindow(){
        glfwInit();
        glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
        glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
        glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
        this->m_window = glfwCreateWindow(
                        this->m_props.size.width,
                        this->m_props.size.height,
                        this->m_props.title.c_str(),
                        NULL,
                        NULL
                        );
        if (this->m_window == NULL)
        {
            std::cout << "Error creating window" << std::endl;
            glfwTerminate();
            std::exit(-1);
        }
        glfwMakeContextCurrent(this->m_window);

    }

    void Window::ChangeSize(){

    }

    void Window::ChangeTitle(){

    }

    Window::~Window(){
        glfwDestroyWindow(this->m_window);
        glfwTerminate();
    }

}
