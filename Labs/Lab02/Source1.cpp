//#include <iostream>
//using namespace std;
//char** AllocateMemory(int& rows, int& cols)
//{
//    cout << "Enter number of rows and columns in matrix:" << endl;
//    cin >> rows >> cols;
//    char** matrix = new char* [rows];
//    for (int i = 0; i < rows; i++)
//    {
//        matrix[i] = new char[cols];
//    }
//    return matrix;
//}
//
//void InputMatrix(char** matrix, const int rows, const int cols)
//{
//    cout << "Enter elements of matrix:" << endl;
//    for (int i = 0; i < rows; i++)
//    {
//        for (int j = 0; j < cols; j++)
//        {
//            cin >> matrix[i][j];
//        }
//    }
//}
//
//void DisplayMatrix(char** matrix, const int& rows, const int& cols)
//{
//    for (int i = 0; i < rows; i++)
//    {
//        for (int j = 0; j < cols; j++)
//        {
//            cout << matrix[i][j] << " ";
//        }
//        cout << endl;
//    }
//}
//void GetArrays(char** matrix, int rows, int cols, char* alphabets, int& alphabetsSize, char* numbers, int& numbersSize, char* specialchar, int& specialcharSize)
//{
//    for (int i = 0; i < rows; i++)
//    {
//        for (int j = 0; j < cols; j++)
//        {
//            if (isalpha(matrix[i][j]))
//            {
//                alphabets[alphabetsSize++] = matrix[i][j];
//            }
//            else if (isdigit(matrix[i][j]))
//            {
//                numbers[numbersSize++] = matrix[i][j];
//            }
//            else
//            {
//                specialchar[specialcharSize++] = matrix[i][j];
//            }
//        }
//    }
//}
//int main()
//{
//    int rows, cols;
//    char** matrix = AllocateMemory(rows, cols);
//    InputMatrix(matrix, rows, cols);
//    cout << "Matrix:" << endl;
//    DisplayMatrix(matrix, rows, cols);
//
//    const int MAX_SIZE = 100;
//    char alphabets[MAX_SIZE];
//    int alphabetsSize = 0;
//    char numbers[MAX_SIZE];
//    int numbersSize = 0;
//    char specialchar[MAX_SIZE];
//    int specialcharSize = 0;
//    GetArrays(matrix, rows, cols, alphabets, alphabetsSize, numbers, numbersSize, specialchar, specialcharSize);
//
//    cout << "Alphabets: ";
//    for (int i = 0; i < alphabetsSize; i++)
//    {
//        cout << alphabets[i] << " ";
//    }
//    cout << endl;
//
//    cout << "Numbers: ";
//    for (int i = 0; i < numbersSize; i++)
//    {
//        cout << numbers[i] << " ";
//    }
//    cout << endl;
//
//    cout << "Special characters: ";
//    for (int i = 0; i < specialcharSize; i++)
//    {
//        cout << specialchar[i] << " ";
//    }
//    cout << endl;
//
//    for (int i = 0; i < rows; i++)
//    {
//        delete[] matrix[i];
//    }
//    delete[] matrix;
//    return 0;
//}
