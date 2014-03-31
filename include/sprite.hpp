#ifndef SPRITE_HPP
#define SPRITE_HPP

class sprite 
{
    public:
        string stringPath;
        int width;      // Frame width
        int height;     // Frame height
        int columns;        // Frames per line
        sprite ( const string& spritePath, int frameWidth, int frameHeight, int framesPerLine );
}

#endif
