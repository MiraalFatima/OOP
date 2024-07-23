//#include<iostream>
//using namespace std;
//class student
//{
//	int size;
//	int* marks;
//public:
//	student()
//	{
//		marks = NULL;
//		size = 0;
//	}
//	student(int array[], int size)
//	{
//		marks = new int[size];
//		for (int i = 0; i < size; i++)
//		{
//			*(marks + i) = array[i];
//		}
//
//	}
//	void scaleup(int marks[], int size)
//	{
//		for (int i = 0; i < size; i++)
//		{
//			if (marks[i] > 45 && marks[i] + 5 <= 100)
//			{
//				marks[i] = marks[i] + 5;
//			}
//
//		}
//
//	}
//	void printinfo()
//	{
//		for (int i = 0; i < size; i++)
//		{
//			cout << marks[i] << endl;
//		}
//	}
//	~student()
//	{
//		delete[]marks;
//		marks = NULL;
//	}
//};
//
//int main()
//{
//	int size = 5;
//	int array[5] = { 50,12,60,96,65 };
//	student std_1(array, size);
//	std_1.printinfo();
//	std_1.scaleup(array, size);
//	std_1.printinfo();
//
//
//
//}