#ifndef unittests_hpp
#define unittests_hpp

#include <stdio.h>
#include "arc.hpp"
#include "Test.h"
#include "arc.hpp"
#include "FresnelJackson.hpp"

class unittest{
    
    combined arc_storage;
    FresnelJackson jackson;
    
public:
    
    void ellipse_pointcheck();
    void LineOnEllipseIntersection();
    void Ellipse_Points3D();
    void arctest();
    
    
    
    
};

#endif