#include "entity2D.hpp"

entity2D::entity2D() 
    : facingAngle( 0 )
    , position( point2D ( 0, 0 ) )
{}

entity2D::entity2D( const double whichFacingAngle, const point2D& whichPosition ) 
    : facingAngle( whichFacingAngle )
    , position( whichPosition )
{}
