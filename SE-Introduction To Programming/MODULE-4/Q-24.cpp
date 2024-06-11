#include <iostream>

class Number
{
    int x;
    int y;
    friend void swap(Number &n);

public:
    void setX(int x) { this->x = x; }
    void setY(int y) { this->y = y; }
    void print() { std::cout << "x: " << x << " y: " << y << std::endl; }
};

void swap(Number &n)
{
    n.x = n.x + n.y;
    n.y = n.x - n.y;
    n.x = n.x - n.y;
}

int main()
{
    Number n;
    n.setX(5);
    n.setY(10);
    std::cout << "Before swap: ";
    n.print();
    swap(n);
    std::cout << "After swap: ";
    n.print();
    return 0;
}
