#ifndef ENTITY2D_HPP
#define ENTITY2D_HPP

#include "point2D.hpp"

class entity2D 
{
    public:
        double facingAngle;
        point2D position;

        entity2D();
        entity2D( const double whichFacingAngle, const point2D& whichPosition );
};

#endif
