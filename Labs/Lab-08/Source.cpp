#include<iostream>
using namespace std;

class Point
{
private :
 int x;
 int y;
public:

 Point(int x1 = 0 , int y1 = 0)
 {
 x = x1;
 y = y1;


 }

 void print()
 {
 cout << "( " << x << "," << y << " )" << endl;
 }
 ~Point()
 {
 cout << "---Destructor called---" << endl;
 }
};
class circle
{
private:
 Point center;
 float radius;
public:
 circle(int x, int y, float r) : center(x, y), radius(r)
 {

 cout << "circle called()" << endl;
 };

 void print()
 {
 cout << "Radius is :" << radius << endl;
 cout << "center is :";
 center.print();
 }
};
class Quadilateral
{
private:
 Point w, x, y, z;
public:
 Quadilateral(int a, int b, int c, int d, int e, int f, int g, int h) : w(a, b), x(c, d), y(e, f), z(g, h)
 {
 cout << "Quadilateral called()" << endl;
 }
 void display()
 {
 cout << "1st corner " << endl;
 w.print();
 cout << "2nd corner " << endl;
 x.print();
 cout << "3rd corner " << endl;
 y.print();
 cout << "4th corner " << endl;
 z.print();
 }
};
int main()
{
 circle c(3, 4, 2.5);
 cout << "Point called()" << endl;
 c.print();
 Quadilateral Q1(1, 2, 3, 4, 5, 6, 7, 8);
 Q1.display();
 Quadilateral obj(1, 0, 0, 1, 1, 1, 0, 0);
 obj.display();
 system("pause");
 return 0;
}

