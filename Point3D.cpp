#include "./Point3D.h"
#include <iostream>

Point3D::Point3D() : m_x{0}, m_y{0}, m_z{0}
{
}
Point3D::Point3D(int x, int y, int z)
{
    m_x = x;
    m_y = y;
    m_z = z;
}

Point3D::~Point3D()
{
}
void Point3D::setValues(int x, int y, int z)
{
    m_x = x;
    m_y = y;
    m_z = z;
}
bool Point3D::isEqual(Point3D &p)
{
    return (m_x == p.m_x && m_y == p.m_y && m_z == p.m_z);
}
void Point3D::print()
{
    std::cout << "Point (" << m_x << ", " << m_y << ", " << m_z << ")\n";
}