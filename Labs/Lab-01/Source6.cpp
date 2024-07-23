//#include<iostream>
//using namespace std;
//void Output(int* arr, int size)
//{
//	cout << endl;
//	cout << "The Reversed Array : ";
//	cout << endl;
//	for (int i = 0; i < size; i++)
//	{
//		cout << arr[i] << " ";
//	}
//}
//void Reverse(int* Arr, int Size)
//{
//	int j = Size - 1;
//	for (int i = 0; i < j; i++, j--)
//	{
//		int temp = Arr[i];
//		Arr[i] = Arr[j];
//		Arr[j] = temp;
//	}
//
//	Output(Arr, Size);
//
//}
//void Input(int*& Array, int& size)
//{
//	int count = 0, value = 0;
//	cout << "Enter the value of the array:" << endl;
//	for (int i = 0; i < size; i++)
//	{
//		
//		cin >> value;
//		if (value == -1)
//		{
//			break;
//		}
//		else
//		{
//			Array[i] = value;
//			count++;
//			if (count == size)
//			{
//				size = size * 2;
//			}
//
//		}
//	}
//	cout << " Array before : ";
//	for (int i = 0; i < count; i++)
//	{
//		cout << Array[i] << " ";
//	}
//	Reverse(Array, count);
//}
//int main()
//{
//	int size ;
//	cout << "Enter the size of the array you want to start with initially : " << endl;
//	cout << "(preferred start 5 )" << endl;
//	cin >> size;
//	int* P;
//	P = new int[size];
//	Input(*&P, size);
//}