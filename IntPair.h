#pragma once

class IntPair
{
private:
    int m_x;
    int m_y;

public:
    IntPair();
    IntPair(int x, int y);
    void print();
    void set(int x, int y);
};