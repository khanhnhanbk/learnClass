#include "Stack.h"
#include <cstddef>
#include <iostream>
Stack::Stack()
{
    m_number = 0;
    m_data = new int[10]{0};
}
void Stack::reset()
{
    for (size_t i = 0; i < m_number; i++)
    {
        m_data[i] = 0;
    }
    m_number = 0;
}
void Stack::print()
{
    std::cout << "(";
    for (size_t i = 0; i < m_number; i++)
    {
        std::cout << m_data[i] << " ";
    }
    std::cout << ")\n";
}
Stack::~Stack()
{
    delete[] m_data;
}
void Stack::pop()
{
    if (m_number == 0)
    {
        std::cerr << "empty Stack";
        return;
    }
    else
    {
        m_data[m_number - 1] = 0;
        m_number--;
    }
}
void Stack::push(int data)
{
    if (m_number == 10)
    {
        std::cerr << "full Stack";
        return;
    }
    else
    {
        m_data[m_number] = data;
        m_number++;
    }
}