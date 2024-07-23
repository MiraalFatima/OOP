#include<iostream>
using namespace std;
class Shape {
protected:
	float length;
	float breadth;
	float height;
public: 
	Shape(): length(0),breadth(0),height(0){}
	Shape(float l, float b, float h)
	{
		length = l;
		breadth = b;
		height = h;
	}
	friend istream& operator>>(istream& in, Shape& obj);
	friend ostream& operator<<(ostream& out, Shape& obj);
};
class Painting{
	float cost;
public: 
	Painting() : cost(00.0) {};
	float getCost(float area)
	{
		cost = area * 50;
		return cost;
	}
};
class Square: public Shape, public Painting {
	float area;
public: 
	Square(): area(0){}
	float getArea()
	{
		area = length * length;
		return area;
	}
};
class Rectangle: public Shape , public Painting {
	float area;
public:
	Rectangle(): area(0){}
	float getArea()
	{
		area = length * breadth;
		return area;
	}
	
};
class Triangle: public Shape, public Painting {
	float area;
public: 
	Triangle() : area(0) {}
	float getArea()
	{
		area = 0.5 * breadth * height;
		return area;
	}
	
};
istream& operator>>(istream& in, Shape& obj)
{
	cout << "Enter the length: " << endl;
	in >> obj.length;
	cout << "Enter the breadth: " << endl;
	in >> obj.breadth;
	cout << "Enter the height: " << endl;
	in >> obj.height;
	return in;
}
ostream& operator<<(ostream& out, Shape& obj)
{
	out << "Length: " <<obj.length<< endl;
	out << "Breadth: " <<obj.breadth<< endl;
	out << "Height: " <<obj.height<< endl;
	return out;
}
int main()
{
	Square obj1;
	Rectangle obj2;
	Triangle obj3;
	cin >> obj1;
	cout << obj1;
	cout<<"Area of square is: "<<obj1.getArea()<<endl;
	cout << "Cost of Painting: " << obj1.getCost(obj1.getArea()) << endl;
	cin >> obj2;
	cout << obj2;
	cout << "Area of Rectangle is: " << obj2.getArea() << endl;
	cout << "Cost of Painting: " << obj2.getCost(obj2.getArea()) << endl;
	cin >> obj3;
	cout << obj3;
	cout << "Area of Triangle is: " << obj3.getArea() << endl;
	cout << "Cost of Painting: " << obj3.getCost(obj3.getArea()) << endl;




}