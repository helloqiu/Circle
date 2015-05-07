#include <iostream>
#include "Circle.h"
using namespace std;

int main()
{
    Circle::Point center;
    center.setPosition(10 , 10);
    Circle circle(center , 10);
    cout << circle.getCenter()->getX() << ' ' << circle.getCenter()->getY() << endl;
    circle.changePosition(20 , 20);
    cout << circle.getCenter()->getX() << ' ' << circle.getCenter()->getY() << endl;
    return 0;
}
