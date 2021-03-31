#include "./IntPair.h"
#include <iostream>
IntPair::IntPair()
{
    m_x = 0;
    m_y = 0;
}
IntPair::IntPair(int x, int y)
{
    m_x = x;
    m_y = y;
}
void IntPair::set(int x, int y)
{
    m_x = x;
    m_y = y;
}
void IntPair::print()
{
    std::cout << "Pair (" << m_x << ", " << m_y << ")\n";
}

