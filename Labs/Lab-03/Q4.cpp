//#include <iostream>
//#include <string>
//using namespace std;
//class Student
//{
//private:
//	string roll_no;
//	string CNIC;
//	string Adress;
//	string Degree;
//	string Name;
//public:
//	Student()
//	{
//		roll_no = "22L-7902";
//		CNIC = "0246810";
//		Adress = "faisal town";
//		Degree = "BSSE";
//		Name = "miraal fatima";
//	}
//	
//	Student(string R, string C, float A, string D, string N)
//	{
//		roll_no = R;
//		CNIC = C;
//		Adress  = A;
//		Degree = D;
//		Name = N;
//		cout << "Parameterized Constructor called:" << endl;
//	}
//	void input()
//	{
//		cout << "Roll no:" << endl;
//		cin >> roll_no;
//		cout << "CNIC:" << endl;
//		cin >> CNIC;
//		cout << "Adress: " << endl;
//		cin >> Adress;
//		cout << "Degree: " << endl;
//		cin >> Degree;
//		cout << "Name: " << endl;
//		cin >> Name;
//		
//	}
//	void print()
//	{
//		cout << roll_no << " / " << CNIC << " / " << Adress << " / " << Degree << " / " << Name << endl;
//	}
//	void setrollno(string roll)
//	{
//		roll_no = roll;
//	}
//	void setcnic(string C)
//	{
//		CNIC= C;
//	}
//
//	void setadress(string A)
//	{
//		Adress = A;
//	}
//	void setDegree(string D)
//	{
//		Degree = D;
//	}
//	void setname(string N)
//	{
//		Name = N;
//	}
//	string getrollnumber()
//	{
//		return roll_no;
//	}
//	string getcnic()
//	{
//		return CNIC;
//	}
//	string getadress()
//	{
//		return Adress;
//	}
//	string getdegree()
//	{
//		return Degree;
//	}
//	string getname()
//	{
//		return Name;
//	}
//};
//
//int main()
//{
//	 Student stdArr[3];
//	for (int i = 0; i < 3; i++)
//	{
//		stdArr[i].print();
//		stdArr[i].input();
//		stdArr[i].setrollno("22l-7903");
//		stdArr[i].setcnic("0246810");
//		stdArr[i].setadress("faisal town");
//		stdArr[i].setDegree("BSSE");
//		stdArr[i].setname("Miraal fatima");
//		cout << "After Setters and getters: " << endl;
//		cout << "Roll no:" << stdArr[i].getrollnumber() << endl;
//		cout << "CNIC:" << stdArr[i].getcnic() << endl;
//		cout << "Adress: " << stdArr[i].getadress() << endl;
//		cout << "Degree: " << stdArr[i].getdegree() << endl;
//		cout << "Name: " << stdArr[i].getname() << endl;
//	}
//}