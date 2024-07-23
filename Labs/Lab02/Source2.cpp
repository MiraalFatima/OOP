#include <iostream>
using namespace std;

int main()
{
	int check;
	int M, N, start = 0;
	cout << "Enter the size of Array A" << endl;
	cin >> M;
	cout << "Enter the size of Array B" << endl;
	cin >> N;
	int* A = new int[M], * B = new int[N], * C = new int[M + N];
	cout << "Enter " << M << " numbers for Array A" << endl;
	for (int i = 0; i < M; i++)
	{
		cin >> *(A + i);
	}
	cout << "Enter " << N << " numbers for Array B" << endl;
	for (int i = 0; i < N; i++)
	{
		cin >> *(B + i);
	}
	for (int i = start; i < M; i++)
	{
		if (A[i] % 2 == 0)
		{
			C[start] = A[i];
			start++;
		}
	}
	for (int i = 0; i < N; i++)
	{
		if (B[i] % 2 == 0)
		{
			C[start] = B[i];
			start++;
		}
	}
	
	int j = (M + N) - 1;
	for (int i = 0; i < M, j>start; i++)
	{
		if (A[i] % 2 != 0)
		{
			C[j] = A[i];
			j--;
			
		}	
	}
	j = 8;
	for (int i = 0, k = j; i < N, k >= start; i++)
	{
		if (B[i] % 2 != 0)
		{
			C[k] = B[i];
			k--;

		}
	}
	
	
	cout << " NOW  " << endl;
	for (int i = 0; i < (M + N); i++)
	{
		cout << C[i] << endl;
	}
	

}