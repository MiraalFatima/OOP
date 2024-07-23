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
protected:
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

class sphere :public circle {
public:
	sphere(float radius, string color = " ") :circle(radius, color)
	{}
	float volume()
	{
		return (1.3 * pi * radius * radius * radius);
	}
};

float sumArea(shape& s1, shape& s2)
{
	return (s1.area() + s2.area());
}

void checkShape(shape* s)
{
	cout << s->area() << endl;
	cout << s->color << endl;
	sphere* ss = dynamic_cast<sphere*>(s);
	if (ss != NULL)
		cout << "Volume " << ss->volume() << endl;
	/*else
		cout << "Not sphere";*/
}
int main()
{
	triangle t1(1.0, 9.0, "Red");
	circle c1(2, "Blue");
	rectangle r1(6, 2, "Orange");
	sphere s1(4, "Green");
	checkShape(&t1);
	checkShape(&c1);
	checkShape(&r1);
	checkShape(&s1);

	system("pause");
}