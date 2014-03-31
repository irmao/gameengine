#ifndef ENTITY3D_HPP
#define ENTITY3D_HPP

#include "point3D.hpp"

class entity3D 
{
    public:
        double facingAngle;
        point3D position;

        entity3D();
        entity3D( const double whichFacingAngle, const point3D& whichPosition );
}

#endif
