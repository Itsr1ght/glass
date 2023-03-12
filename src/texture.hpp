#ifndef TEXTURE
#define TEXTURE

#include <string>

namespace Glass {

    struct TextureProps {
        int width;
        int height;
        int nrchannel;
    };

    class Texture{
        public:
            Texture(std::string file_path);
            TextureProps get_texture_property();
            ~Texture();
        private:
            unsigned char* texture_data;
            unsigned int m_texture;
            TextureProps tex_props;
            void load_texture(std::string file_path);
    };

}


#endif
