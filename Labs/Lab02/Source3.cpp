//#include<iostream>
//using namespace std;
//int main()
//{
//	int M = 0, N = 0;
//	cout << "Enter the rows of Matrix : ";
//	cin >> M;
//	cout << "Enter the Columns of Matrix : ";
//	cin >> N;
//	int **A = new int*[M];
//	for (int i = 0; i < M; i++)
//	{
//		A[i] = new int[N];
//	}
//	cout << "Enter the values for Matrix : ";
//	for (int i = 0; i < M; i++)
//	{
//		for (int j = 0; j < N; j++)
//		{
//			cin >> A[i][j];
//		}
//	}
//	cout << "Matrix : " << endl;
//	for (int i = 0; i < M; i++)
//	{
//		for (int j = 0; j < N; j++)
//		{ 
//			cout<< A[i][j]<<" ";
//		}
//		cout << endl;
//	}
//
//	for (int i = 0; i < M; i++)
//	{
//		int Row = 0;
//		for (int j = 0; j < N; j++)
//		{
//			Row += A[i][j];
//		}
//		cout << "Row " << i+1<<" = " << Row << endl;
//	}
//	
//	for (int j = 0; j <N; j++)
//	{
//		int Column = 0;
//		for (int i = 0; i < M; i++)
//		{
//			Column += A[i][j];
//		}
//		cout << "Column " << j + 1 << " = " << Column << endl;
//	}
//	int Sum = 0;
//	if (M == N)
//	{
//		for (int i = 0; i < M; i++)
//		{
//			for (int j = 0; j < N; j++)
//			{
//				if (i == j)
//				{
//					
//					Sum += A[i][j];
//
//				}
//			}
//		}
//	}
//	cout << "Daigonal of Matrix = "<<Sum << endl;
//
//}