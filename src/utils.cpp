#include "utils.hpp"
#include <string>
#include <fstream>
#include <sstream>

namespace Glass {

    std::string Utils::load_file(std::string file_path){
        std::string source_data;
        std::ifstream shader_file(file_path);
        std::stringstream stream_data;
        stream_data << shader_file.rdbuf();
        source_data = stream_data.str();
        shader_file.close();
        return source_data;
    }

}

