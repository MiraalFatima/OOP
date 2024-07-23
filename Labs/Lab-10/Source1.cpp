#include<iostream>
#include<string>
using namespace std;

class faculty
{
public:
	faculty()
	{

	}

	virtual void print()
	{
		cout << "Faculty class";
	}
};
class administrator : virtual public faculty
{
public:
	administrator()
	{

	}

	virtual void print()
	{
		cout << "Administrator class ";
	}

};
class teacher : virtual public faculty
{
public:
	teacher()
	{

	}

	virtual	void print()
	{
		cout << "teacher class ";
	}


};
class administratorteacher : public administrator, public teacher
{
public:
	administratorteacher() {};
	virtual void print()
	{
		administrator::print();
	}
};

int main()
{
	administrator a;
	teacher t;
	administratorteacher at;
	faculty* arr[] = { &a, &t, &at };
	for (int i = 0; i < 3; i++)
	{
		arr[i]->print();
	}
	system("pause");
	return 0;
}
