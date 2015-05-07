#include "Circle.h"

Circle::Circle(Point &center , int radius)
{
    //ctor
    this -> center = &center;
    this -> radius = radius;
}
Circle::Point* Circle::getCenter(){
    return center;
}
void Circle::changePosition(int x , int y){
    center->setPosition(x , y);
}
