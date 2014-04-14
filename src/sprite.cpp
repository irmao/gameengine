#include "sprite.hpp"

sprite::sprite ( const string& spritePath, int frameWidth, int frameHeight, int framesPerLine )
{
    this->stringPath = spritePath;
    this->width = frameWidth;
    this->height = frameHeight;
    this->columns = framesPerLine;
}
