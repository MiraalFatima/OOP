//#include<iostream>
////#include<cstring>
//using namespace std;
//
//class Teacher
//{
//	char EmployeeID;
//	char* name;
//public:
//	Teacher(int id , const char* Name)
//	{
//		EmployeeID = id;
//		Name = new char[strlen(name) + 1];
//		for (int i = 0; i < strlen(name); i++)
//		{
//			name[i] = Name[i];
//		}
//	}
//
//	void Display()
//	{
//		cout << "Employee ID : " << EmployeeID;
//		cout << " Naam - e - mubarik : " << name << endl;
//	}
//	~Teacher()
//	{
//		delete[]name;
//		name = NULL;
//	}
//};
//class Student
//{
//	char* roll_number;
//	char* name;
//	Teacher* TeacherList;
//public:
//	Student( const char* rollnum , const char* na ,  Teacher *tlist)
//	{
//
//		roll_number = new char[strlen(rollnum) + 1];
//		for (int i = 0; i < (strlen(roll_number) + 1); i++)
//		{
//			roll_number[i] = rollnum[i];
//		}
//		name = new char[(strlen(na)) + 1];
//		for (int i = 0; i < (strlen(na) + 1); i++)
//		{
//			name [i] = na[i];
//		}
//		this->TeacherList = tlist;
//
//	}
//	void Display()
//	{
//		cout << "Roll no. " << roll_number;
//		cout << "Name : " << name;
//		cout << "Teacher list :";
//		TeacherList->Display();
//	}
//
//};
//
//int main()
//{
//	Teacher t1(1, "miraal");
//	Teacher t2(2, "mahroosh");
//	Teacher t3(3, "laraib");
//
//	Student S1("22l-7902 ", "anoosha", &t1);
//	Student S2("22l-7903 ", "tahreem", &t2);
//	Student S3("22l-7904 ", "fatima", &t3);
//	S1.Display();
//	S2.Display();
//	S3.Display();
//	system("pause");
//	return 0;
//
//}