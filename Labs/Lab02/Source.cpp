//#include <iostream>
//using namespace std;
//int convertodec(long binaryinp)
//{
//	int decimal = 0;
//	int i = 0;
//	int remainder;
//
//	while (binaryinp != 0)
//	{
//		remainder = binaryinp % 10;
//		binaryinp /= 10;
//		decimal += remainder * pow(2, i);
//		++i;
//	}
//	return decimal;
//}
//
//int* reallocmem(int* arr, int& size)
//{
//	size *= 2;
//
//	int* arrnew = new int[size];
//
//	for (int i = 0; i < size / 2; i++)
//	{
//		arrnew[i] = arr[i];
//	}
//	delete arr;
//	return arrnew;
//}
//
//int main()
//{
//	long binaryinput;
//	int decimal = 0;
//	int arraycheck = 0;
//
//	int size1 = 5;
//	int size2 = 5;
//	int size3 = 5;
//
//	int* arr1 = new int[size1];
//	int* arr2 = new int[size2];
//	int* arr3 = new int[size3];
//	cout << "Enter -1 to terminate" << endl;
//	while (true)
//	{
//		int i = 0;
//		cout << "Enter the number between 4 and 32 :";
//		cin >> arr1[i];
//
//		if (arr1[i] == -1)
//		{
//			break;
//		}
//
//		while (arr1[i] < 4 || arr1[i]>32)
//		{
//			cout << "Error! this is out of range :(" << endl;
//			cout << "Enter number between range :";
//			cin >> arr1[i];
//		}
//		cout << "Enter the binary code for the number you've entered :";
//		cin >> binaryinput;
//
//		decimal = convertodec(binaryinput);
//
//		arr3[i] = decimal;
//
//		if (arr1[i] == decimal)
//		{
//			arraycheck = 1;
//		}
//		else
//		{
//			arraycheck = 0;
//		}
//		i++;
//
//		if (i == size1)
//		{
//			arr1 = reallocmem(arr1, size1);
//			arr2 = reallocmem(arr2, size2);
//			arr3 = reallocmem(arr3, size3);
//		}
//
//	}
//	if (arraycheck == 1)
//	{
//		cout << "Yayyy! You've got the right binary ;).";
//	}
//	else
//	{
//		cout << " Sorry :( both arrays are not same in binary value.";
//	}
//
//	delete arr1;
//	delete arr2;
//	delete arr3;
//
//	return 0;
//}