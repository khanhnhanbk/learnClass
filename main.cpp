#include <iostream>
#include "IntPair.h"
#include "Point3D.h"
int main()
{
    Point3D point1;
    point1.setValues(1, 2, 3);

    Point3D point2;
    point2.setValues(1, 2, 3);

    if (point1.isEqual(point2))
    {
        std::cout << "point1 and point2 are equal\n";
    }
    else
    {
        std::cout << "point1 and point2 are not equal\n";
    }
    point1.print();
    point2.print();
    Point3D point3;
    point3.setValues(3, 4, 5);

    if (point1.isEqual(point3))
    {
        std::cout << "point1 and point3 are equal\n";
    }
    else
    {
        std::cout << "point1 and point3 are not equal\n";
    }
    point3.print();
    return 0;
}