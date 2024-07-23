//#include<iostream>
//using namespace std;
//class student
//{
//	string roll_no;
//	int age;
//	float cgpa;
//public:
//	student()
//	{
//		roll_no = "21L - 1234";
//		age = 25;
//		cgpa = 3.24;
//		cout << "Default constructor called" << endl;
//
//	}
//	student(string r, int a, float c)
//	{
//		roll_no = r;
//		age = a;
//		cgpa = c;
//		cout << "Overloaded/parameterized constructor called" << endl;
//	}
//	void getInput()
//	{
//		cin >> roll_no;
//		cin >> age;
//		cin >> cgpa;
//	}
//	void print()
//	{
//		cout << roll_no << "/" << age << "/" << cgpa << endl;
//	}
//	void set_roll_no(string r)
//	{
//		roll_no = r;
//	}
//	void set_age(int a)
//	{
//		age = a;
//	}
//	void set_cgpa(float c)
//	{
//		cgpa = c;
//	}
//
//	string get_roll_no()
//	{
//		return roll_no;
//	}
//	int get_age()
//	{
//		return age;
//	}
//	float get_cgpa()
//	{
//		return cgpa;
//	}
//
//};
//
//int main()
//{
//	student std_1;
//	std_1.print();
//	student std_2("21L-1234", 25, 3.24);
//	std_2.print();
//	std_1.getInput();
//	std_1.print();
//	student std_3;
//	std_3.set_roll_no("21L - 1234");
//	std_3.set_age(25);
//	std_3.set_cgpa(3.24);
//	cout << std_3.get_roll_no() << endl;
//	cout << std_3.get_age() << endl;
//	cout << std_3.get_cgpa() << endl;
//
//}