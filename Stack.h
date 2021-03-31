#include <cstddef>
#pragma once
class Stack
{
private:
    int *m_data;
    int m_number;

public:
    Stack();
    void reset();
    void print();
    void push(int data);
    void pop();
    ~Stack();
};
