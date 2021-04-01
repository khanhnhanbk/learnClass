#include <string>
#include <iostream>

class Ball
{
private:
    std::string m_color{"black"};
    double m_radius{};

public:
    // Constructor with only radius parameter (color will use default value)
    Ball(double radius) : m_radius{radius}
    {
    }

    // Constructor with both color and radius parameters
    Ball(const std::string &color = "black", double radius = 10) : m_radius{radius}, m_color{color}
    {
    }

    void print()
    {
        std::cout << "color: " << m_color << ", radius: " << m_radius << '\n';
    }
    friend std::ostream &operator<<(std::ostream &out, const Ball &ball);
};
std::ostream &operator<<(std::ostream &out, const Ball &ball)
{
    std::cout << "color: " << ball.m_color << ", radius: " << ball.m_radius << '\n';
    return out;
}
int main()
{
    Ball def;
    std::cout << def;

    Ball blue{"blue"};
    blue.print();

    Ball twenty{20.0};
    twenty.print();

    Ball blueTwenty{"blue", 20.0};
    blueTwenty.print();

    return 0;
}