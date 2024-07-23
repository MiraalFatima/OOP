#include <iostream>
using namespace std;
class rationalnumber
{
private:
	int numerator;
	int denominator;
public:
	int findgcd(int a, int b);
	void reducedfraction(int num1, int num2);
	/*void display();*/
	rationalnumber()
	{
		numerator = 0;
		denominator = 0;
	}
	rationalnumber(int num, int den)
	{
		if (den == 0 || den < 0)
		{
			cout << "denominator should be a positive number!" << endl;
			denominator = 1;
		}
		reducedfraction(num, den);

	}
	friend istream& operator >> (istream& in, rationalnumber& r)
	{
		in >> r.numerator >> r.denominator;
		if (r.denominator == 0)
		{
			cout << "denominator cannot be 0. so, setting denominator =1." << endl;
		}
		return in;
	}
	friend ostream& operator << (ostream& out, const rationalnumber& r)
	{
		out << r.numerator << " / " << r.denominator;
		return out;
	}
	bool operator == (const rationalnumber& r)
	{
		return numerator == r.numerator && denominator == r.denominator;
	}
	rationalnumber operator*(const rationalnumber& r)
	{
		int n = numerator * r.numerator;
		int d = denominator * r.denominator;
		return rationalnumber(n, d);
	}
	rationalnumber operator++(int)
	{
		numerator++;
		denominator++;
		/*reducedfraction(numerator, denominator);*/
		return *this;
	}
	rationalnumber operator--(int)
	{
		numerator--;
		denominator--;
		/*reducedfraction(numerator, denominator);*/
		return *this;
	}
	rationalnumber operator+(const rationalnumber& r)
	{
		rationalnumber temp;
		temp.numerator = numerator + r.numerator;
		temp.denominator = denominator + r.denominator;
		return temp;
	}
	rationalnumber operator-(const rationalnumber& r)
	{
		rationalnumber temp;
		temp.numerator = numerator - r.numerator;
		temp.denominator = denominator - r.denominator;
		return temp;
	}

};
int rationalnumber::findgcd(int a, int b)
{
	if (b == 0)
	{
		return a;
	}
	return findgcd(b, a % b);
}
void rationalnumber::reducedfraction(int num1, int num2)
{
	int temp;
	temp = findgcd(num1, num2);
	num1 /= temp;
	num2 /= temp;
	numerator = num1;
	denominator = num2;
}

int main()
{
	rationalnumber rn1;
	rationalnumber rn2(5, 6);
	rationalnumber rn3;
	cout << "input a rational number:" << endl;
	cin >> rn3;
	cout << rn1 << rn2 << rn3;
	if (rn2 == rn3)
	{
		cout << "rn2 == rn3" << endl;
	}
	else
	{
		cout << "rn2 != rn3" << endl;
	}
	rationalnumber rn4 = rn2 - rn3;
	cout << rn4;
	rationalnumber rn5 = rn2 + rn3;
	cout << rn5;
	rn4++;
	cout << rn4;
	rn5--;
	cout << rn5;
}