#include "raw_model.hpp"
#include "vao.hpp"


namespace Glass {

    RawModel::RawModel(float vertices[], int indices[])
    {} 
    
    Vao RawModel::get_id(){
        return m_vao;
    }

    RawModel::~RawModel(){
    }

}
