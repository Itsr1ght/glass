#ifndef OBJLOADER
#define OBJLOADER

#include <glm/fwd.hpp>
#include <vector>

namespace Glass {

    struct Obj{
        std::vector<glm::vec3> vertices;
        std::vector<glm::vec2> textures;
        std::vector<glm::vec3> normals;
        std::vector<int> indices;
    };

    class ObjLoader{

        public:
            ObjLoader();
            ~ObjLoader();

        private:
            Obj m_obj;
    };

}

#endif
