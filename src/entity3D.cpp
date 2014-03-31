#include "entity3D.hpp"

entity3D::entity3D() 
    : facingAngle( 0 )
    , position( point3D ( 0, 0, 0 ) )
{}

entity3D::entity3D( const double whichFacingAngle, const point3D& whichPosition ) 
    : facingAngle( whichFacingAngle )
    , position( whichPosition )
{}
