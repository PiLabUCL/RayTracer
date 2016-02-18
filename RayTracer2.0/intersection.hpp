#ifndef Intersection_hpp
#define Intersection_hpp

#include <stdio.h>
#include "Vector3D.h"
#include "Point3D.h"

class Intersection{
    
    double Distance;
    Vector3D Normal;
    Point3D Point;
    
public:
    
    double& GetDistance();
    Vector3D& GetNormal();
    Point3D& GetPoint();
    
    void SetDistance(double& d);
    void SetNormal(Vector3D& n);
    void SetPoint(Point3D& p);
    
};

#endif