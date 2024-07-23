//#include<iostream>
//#include<string>
//using namespace std;
////#define pi = 3.14;
//class shape
//{
//public:
//	string colour;
//	shape(string color = " ")
//	{
//		this->colour = color;
//    }
//	virtual float area()
//	{
//		return (0.0);
//	}
//
//};
//class rectangle : public shape
//{
//private:
//	float height;
//	float width;
//public:
//	rectangle(float h = 0.0 , float w = 0.0 , string c = " ") : shape (c)
//	{
//		this->height = h;
//		this->width = w;
//	}
//	float area()
//	{
//		return(height * width);
//	}
//};
//class circle  : public shape
//{
//private :
//	const float pi = 3.14;
//	float radius;
//public:
//	circle(float r = 0.0 , string color = " ") : shape(color)
//	{
//		this->radius = r;
//	}
//	float area()
//	{
//		//float r;
//		//r = (radius * radius);
//		return(pi * radius * radius);
//	}
//
//};
//
//class triangle : public shape
//{
//private: 
//	float base;
//	float height;
//public:
//	triangle(float h = 0.0, float b = 0.0, string c = " ") : shape(c)
//	{
//		this->height = h;
//		this->base = b;
//	}
//	
//	float area()
//	{
//		return(0.5 * base * height);
//	}
//};
//float sumArea(shape& s1, shape& s2)
//{
//	return (s1.area() + s2.area());
//}

int main()
{
	triangle t1(1.0, 9.0, "Red");
	circle c1(2, "Blue");
	rectangle r1(6, 2, "Orange");
	cout << t1.area() << endl;
	cout << t1.colour << endl;
	cout << c1.area() << endl;
	cout << r1.area() << endl;

	shape* sptr1 = &t1;
	shape& sref = r1;
	cout << sptr1->area() << endl;
	cout << sptr1->colour << endl;
	cout << sref.colour << endl;
	cout << sref.area() << endl;

	triangle t1(1.0, 9.0, "Red");
	circle c1(2, "Blue");
	rectangle r1(6, 2, "Orange");
	shape s1("Purple");

	cout << sumArea(t1, c1) << endl;
	cout << sumArea(s1, r1) << endl;
	cout << sumArea(s1, t1) << endl;


	return 0;
}
