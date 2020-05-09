#ifndef TEXTURE_H
#define TEXTURE_H

enum TextureLoadStatus { SUCCESS, INCORRECTFORMAT, FILEERROR };

#include <string>

class Texture
{
private:
    std::string textureFileLocation;
    unsigned char header[54];
    unsigned int dataPos;
    unsigned int width, height;
    unsigned int imageSize;
    unsigned char *data;
public:
    Texture(std::string textureFileLocation);
    ~Texture();
    TextureLoadStatus load();
    int getSize();
    unsigned char *getData();
};

#endif // TEXTURE_H
