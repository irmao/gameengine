#ifndef SPRITE_HPP
#define SPRITE_HPP

using namespace std;

class Sprite 
{
    public:
        string stringPath;
        int width;      // Frame width
        int height;     // Frame height
        int columns;        // Frames per line
        Sprite ( const string& , int , int , int );
};

#endif
