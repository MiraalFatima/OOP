#include<iostream>
#include<string>
using namespace std;
//#define pi = 3.14;
class shape
{
public:
	string colour;
	shape(string color = " ")
	{
		this->colour = color;
	}
	virtual float area()
	{
		return (0.0);
	}

};
class rectangle : public shape
{
private:
	float height;
	float width;
public:
	rectangle(float h = 0.0, float w = 0.0, string c = " ") : shape(c)
	{
		this->height = h;
		this->width = w;
	}
	virtual float area()
	{
		return(height * width);
	}
};
class circle : public shape
{
private:
	const float pi = 3.14;
	float radius;
public:
	circle(float r = 0.0, string color = " ") : shape(color)
	{
		this->radius = r;
	}
	virtual float area()
	{
		//float r;
		//r = (radius * radius);
		return(pi * radius * radius);
	}

};

class triangle : public shape
{
private:
	float base;
	float height;
public:
	triangle(float h = 0.0, float b = 0.0, string c = " ") : shape(c)
	{
		this->height = h;
		this->base = b;
	}

	virtual float area()
	{
		return(0.5 * base * height);
	}
};
float sumArea(shape& s1, shape& s2)
{
	return (s1.area() + s2.area());
}

int main()
{

	int count = 5;
	float base, height;
	string color;
	shape** shapesArray = new shape * [count];
	for (int i = 0; i < count;)
	{
		cout << " Press 1 for a triangle, 2 for rectangle and 3 for a circle" << endl;
		int choice;
		cin >> choice;
		switch (choice)
		{
		case 1:
		{
			//get base from user as input
			//get height from user as input

			cout << "Enter base and height " << endl;
			cin >> base >> height;
			//get color from user as input

			cout << "Enter color : ";
			cin >> color;
			// create new triangle object and add to shapesArray[i]
			triangle* t = new triangle(base, height, color);
			shapesArray[i] = t;
			i++;
			break;
		}
		case 2:
		{
			//get length from user as input
			//get width from user as input
			float length, width;
			cout << "Enter length and width " << endl;
			cin >> length >> width;
			//get color from user as input
			string color;
			cout << "Enter color : ";
			cin >> color;
			// create new rectangle object and add to shapesArray[i]
			rectangle* r = new rectangle(length, width, color);
			shapesArray[i] = r;
			i++;
			break;
		}
		case 3:
		{
			//get radius from user as input
			float radius;
			cout << "Enter radius : ";
			cin >> radius;
			//get color from user as input
			string color;
			cout << "Enter color : ";
			cin >> color;
			// create new circle object and add to shapesArray[i]
			circle* c = new circle(radius, color);
			shapesArray[i] = c;
			i++;
			break;
		}
		default:
		{
			cout << "Invalid input.Enter again." << endl;
			break;


		}
		}
	}
	for (int i = 0; i < count; i++)
	{
		shapesArray[i]->area();
	}
	for (int i = 0; i < count; i++)
	{
		delete[]shapesArray[i];
	}
	delete[]shapesArray;

	return 0;

}