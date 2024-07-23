#include<iostream>
using namespace std;
class Matrix
{
private:
	int** matrix=0;
	int rows=0;
	int colums=0;
public:
	Matrix()
	{
		matrix = NULL;
	}
	~Matrix() 
	{
		if (matrix != nullptr) {
			for (int i = 0; i < rows; i++) {
				delete[] matrix[i];
			}
			delete[] matrix;
		}
	}
	void SetRows(int r)
	{
		rows = r;
	}
	void SetSize(int s)
	{
		colums = s;
	}
	void SetMatrix(int** m)
	{
		matrix = m;
	}
	
	int GetSize()
	{
		return colums;
	}
	int GetRows()
	{

		return rows;
	}
	int** GetMatrix()
	{
		return matrix;
	}
	void input()
	{
		
		 matrix = new int* [rows];
		for (int i = 0; i < rows; i++)
		{
			matrix[i] = new int[colums];
		}
		for (int i = 0; i < rows; i++)
		{
			for (int j = 0; j < colums; j++)
			{
				cout << "Enter the value at index [" << i + 1 << "][" << j + 1 << "] : ";
				cin >> matrix[i][j];
			}
		}
	}
	void output()
	{
		cout << "OUTPUT : \n";
		for (int i = 0; i < rows; i++)
		{
			for (int j = 0; j < colums; j++)
			{
				cout<< matrix[i][j]<<" ";
			}
			cout << endl;
		}
	}
	Matrix(const  Matrix& cp)
	{
		cout << "----COPY CONSTRUCTOR CALLED----\n ";
		cout << "----------------------------------" << endl;
		rows = cp.rows;
		colums = cp.colums;
		int** matrix = new int* [rows];
		for (int i = 0; i < rows; i++)
		{
			matrix[i] = new int[colums];
		}
		for (int i = 0; i < rows; i++)
		{
			for (int j = 0; j < colums; j++)
			{
				 matrix[i][j] = cp.matrix[i][j];
			}
		}
		cout << "Output matrix : \n";
		for (int i = 0; i < rows; i++)
		{
			for (int j = 0; j < colums; j++)
			{
				cout << matrix[i][j] << " ";
			}
			cout << endl;
		}
	}
	int** AddMatrix(Matrix& m2)
	{
		int** result = new int* [rows];
		for (int i = 0; i < rows; i++) 
		{
			result[i] = new int[colums];
		}
		for (int i = 0; i < rows; i++)
		{
			for (int j = 0; j < colums; j++)
			{
				result[i][j] = matrix[i][j] + matrix[i][j];
			}
		}
		cout << "After Addition : \n";
		for (int i = 0; i < rows; i++)
		{
			for (int j = 0; j < colums; j++)
			{
				cout << result[i][j] << " ";
			}
			cout << endl;
		}
		return result;
	}
};

int  main()
{
	
	Matrix m1;
	m1.SetRows(3);
	m1.SetSize(3);
	m1.input();
	m1.output();
	Matrix m2 = m1;
	int** result;
	result = m1.AddMatrix(m2);
	
	if (result != nullptr)
	{
		Matrix resultMatrix;
		resultMatrix.SetMatrix(result);
		resultMatrix.SetRows(m1.GetRows());
		resultMatrix.SetSize(m1.GetSize());
	}
	
}