#include <iostream>
using namespace std;
class BasicShape
{
private:
    double area;

public:
    void set_area(double area)
    {
        this->area = area;
    }
    double get_area() const
    {
        return area;
    }

    virtual void calcArea() = 0;
};
class Circle : public BasicShape
{
private:
    long int centerX;
    long int centerY;
    double radius;

public:
    Circle(long int x, long int y, double r) : centerX(x), centerY(y), radius(r)
    {
        calcArea();
    }

    long int getCenterX() const
    {
        return centerX;
    }

    long int getCenterY() const
    {
        return centerY;
    }

    void calcArea()
    {
        double area = 3.14159 * radius * radius;
        set_area(area);
    }
};

class Rectangle : public BasicShape
{
private:
    long int width;
    long int length;

public:
    Rectangle(long int w, long int l) : width(w), length(l)
    {
        calcArea();
    }

    long int getWidth() const
    {
        return width;
    }

    long int getLength() const
    {
        return length;
    }

    void calcArea()
    {
        double area = length * width;
        set_area(area);
    }
};

int main()
{
    Circle circle(0, 0, 2.5);
    Rectangle rectangle(3.5, 4.5);
    cout << "Circle area: " << circle.get_area() << endl;
    cout << "Rectangle area: " << rectangle.get_area() << endl;
    return 0;
}