//#include<iostream>
//using namespace std;
//int func(int* arr, int size)
//{
//	while (true)
//	{
//		int* arr1 = new int[size * 2];
//
//
//		for (int i = 0; arr1[i]!=-1; i++)
//		{
//			{ 
//				if (arr[i] == -1)
//				{
//					cout << "Programme terminated because of -1 " << endl;
//					break;
//
//				}
//				int* arr2 = new int[size * 2];
//				for (i = 0; i < size * 2; i++) 
//				{
//					arr2[i] = arr1[size * 2 - i - 1];
//				}
//				
//					
//				}
//				cin >> *(arr1 + i);
//				continue;
//			}
//		}
//
//	}
//	return arr2;
//}
//int main()
//{
//	int size;
//	cout << "Enter the size of the array : " << endl;
//	cin >> size;
//	int* arr = new  int[size];
//	cout << "Enter the values of the array : " << endl;
//	for (int i = 0; i < size; i++)
//	{
//		cin >> arr[i];
//
//	}
//	cout << "The values of the array are : " << endl;
//	for (int i = 0; i < size; i++)
//	{
//		cout << arr[i];
//	}
//	func(arr, size);
//	return 0;
//}