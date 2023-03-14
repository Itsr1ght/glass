#include "renderer.hpp"
#include "raw_model.hpp"
#include <iostream>
#include <glad.h>
#include <GLFW/glfw3.h>

namespace Glass {

    Renderer::Renderer(Window &window)
        :m_window(window)
    {
       this->initiate_renderer(); 
    }

    void Renderer::add_to_renderer(RawModel model){
        this->m_models.push_back(model);
    }

    void Renderer::render(){
        for (RawModel model : this->m_models){
            m_vao.link_vbo(model.get_vbo(), 0); 
            m_vao.bind();
            model.bind();
            glDrawArrays(GL_TRIANGLES, 0, 36);
            model.unbind();
            m_vao.unbind();

        }

    }

    void Renderer::initiate_renderer(){
        if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress))
        {
            std::cout << "Failed to initialize GLAD" << std::endl;
            std::exit(-1);
        }
    }

    Renderer::~Renderer(){
    
    }
}
