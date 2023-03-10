#include "shader.hpp"
#include "glad.h"

#include <string>
#include <iostream>
#include <fstream>
#include <sstream>

namespace Glass {

    Shader::Shader(const char* vertex_path, const char* fragment_path){
        std::string vertexCode = this->load_file(vertex_path);
        std::string fragmentCode = this -> load_file(fragment_path);
        const char* vShaderCode = vertexCode.c_str();
        const char* fShaderCode = fragmentCode.c_str();

        // 2. compile shaders
        unsigned int vertex, fragment;
        int success;
        char infoLog[512];

        // vertex Shader
        vertex = glCreateShader(GL_VERTEX_SHADER);
        glShaderSource(vertex, 1, &vShaderCode, NULL);
        glCompileShader(vertex);
        // print compile errors if any
        glGetShaderiv(vertex, GL_COMPILE_STATUS, &success);
        if(!success)
        {
            glGetShaderInfoLog(vertex, 512, NULL, infoLog);
            std::cout << "ERROR::SHADER::VERTEX::COMPILATION_FAILED\n" << infoLog << std::endl;
        }

        // vertex Shader
        fragment = glCreateShader(GL_FRAGMENT_SHADER);
        glShaderSource(fragment, 1, &fShaderCode, NULL);
        glCompileShader(fragment);
        // print compile errors if any
        glGetShaderiv(fragment, GL_COMPILE_STATUS, &success);
        if(!success)
        {
            glGetShaderInfoLog(vertex, 512, NULL, infoLog);
            std::cout << "ERROR::SHADER::VERTEX::COMPILATION_FAILED\n" << infoLog << std::endl;
        }

        ID = glCreateProgram();
        glAttachShader(ID, vertex);
        glAttachShader(ID, fragment);
        glLinkProgram(ID);
        // print linking errors if any
        glGetProgramiv(ID, GL_LINK_STATUS, &success);
        if(!success)
        {
            glGetProgramInfoLog(ID, 512, NULL, infoLog);
            std::cout << "ERROR::SHADER::PROGRAM::LINKING_FAILED\n" << infoLog << std::endl;
        }
        // delete the shaders as they're linked into our program now and no longer necessary
        glDeleteShader(vertex);
        glDeleteShader(fragment);
    };

    Shader::Shader(std::string file_path){

    }

    Shader::~Shader(){
        if (ID)
            glDeleteProgram(ID);
    }

    std::string Shader::load_file(std::string file_path){

        std::string source_data;
        std::ifstream shader_file(file_path);
        std::stringstream stream_data;
        stream_data << shader_file.rdbuf();
        source_data = stream_data.str();
        shader_file.close();
        std::cout << "The Shader code is :" << source_data << std::endl;
        return source_data;
    }

    void Shader::use(){
       glUseProgram(ID);
    }

    void Shader::setBool(const std::string &name, bool value) const{
        glUniform1i(glGetUniformLocation(ID, name.c_str()), (bool)value); 
    }

    void Shader::setInt(const std::string &name, int value) const{
        glUniform1i(glGetUniformLocation(ID, name.c_str()), (int)value); 
    }

    void Shader::setFloat(const std::string &name, float value) const{
        glUniform1i(glGetUniformLocation(ID, name.c_str()), (float)value); 
    }

    void Shader::setMat4(const std::string &name, glm::mat4 value) const{
        glUniformMatrix4fv(glGetUniformLocation(ID, name.c_str()), 1, GL_FALSE, glm::value_ptr(value));
    }

}
