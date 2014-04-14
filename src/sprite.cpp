#include "Sprite.hpp"

Sprite::Sprite ( const string& SpritePath, int frameWidth, int frameHeight, int, framesPerLine )
{
    this->stringPath = image ( SpritePath );
    this->width = frameWidth;
    this->height = frameHeight;
    this->columns = framesPerLine;
}
