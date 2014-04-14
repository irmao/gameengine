#ifndef SPRITE_HPP
#define SPRITE_HPP
#include <string>
//#include "image.hpp"

using namespace std;

class sprite 
{
    public:
        string stringPath;
        int width;      // Frame width
        int height;     // Frame height
        int columns;        // Frames per line
        sprite ( const string& , int , int , int );
        sprite ();
};

#endif
