#ifndef OBJLOADER
#define OBJLOADER

#include <vector>
#include <string>

namespace Glass {

    struct vec2 {
        float x;
        float y;
    };

    struct vec3 {
        float x;
        float y;
        float z;
    };

    struct Obj{
        std::vector<vec3> vertices;
        std::vector<vec2> textures;
        std::vector<vec3> normals;
        std::vector<int> indices;
    };

    class ObjLoader{

        public:
            ObjLoader(std::string file_path);

            ~ObjLoader();

        private:
            Obj m_obj;
            std::string load_file(std::string file_path);
    };

}

#endif
