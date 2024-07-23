#include<iostream>
#include<string>
using namespace std;

class shape {
public:
	string color;
	shape(string color = " ")
	{
		this->color = color;
	}
	virtual float area()
	{
		return (0.0);
	}
	virtual ~shape()
	{
		cout << "~shape() called " << endl;
	}
};

class circle :public shape {
private:
	const float pi = 3.14;
	float radius;
public:
	circle(float radius = 0, string color = " ") :shape(color)
	{
		this->radius = radius;
	}
	float area()
	{
		return (pi * radius * radius);
	}
	virtual ~circle()
	{
		cout << "~circle() called " << endl;
	}
};

class rectangle :public shape {
private:
	float length;
	float width;
public:
	rectangle(float length = 0.0, float width = 0.0, string color = " ") :shape(color)
	{
		this->length = length;
		this->width = width;
	}
	float area()
	{
		return (length * width);
	}
	virtual ~rectangle()
	{
		cout << "~rectangle() called " << endl;
	}
};

class triangle :public shape {
private:
	float base;
	float height;
public:
	triangle(float base = 0, float height = 0, string color = " ") :shape(color)
	{
		this->base = base;
		this->height = height;
	}
	float area()
	{
		return (0.5 * base * height);
	}
	virtual ~triangle()
	{
		cout << "~triangle() called " << endl;
	}
};

float sumArea(shape& s1, shape& s2)
{
	return (s1.area() + s2.area());
}
int main()
{
	shape* s1 = new triangle(1.0, 9.0, "Red");
	delete s1;

	system("pause");
}