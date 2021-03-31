#pragma once
class Point3D
{
private:
    int m_x;
    int m_y;
    int m_z;

public:
    Point3D();
    Point3D(int x, int y, int z);
    ~Point3D();
};
