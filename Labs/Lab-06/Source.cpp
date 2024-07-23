//#include <iostream>
//using namespace std;
//class ArrayInt
//{
//    int* array;
//    int size_arr;
//public:
//    ArrayInt()
//    {
//        int* array = nullptr;
//        int size_arr = 0;
//    }
//    ArrayInt(int* arr, int size)
//    {
//        size_arr = size;
//        array = new int[size];
//        for (int i = 0; i < size_arr; i++)
//        {
//            array[i] = arr[i];
//        }
//    }
//    ArrayInt(ArrayInt& obj)
//    {
//
//        size_arr = obj.size_arr;
//        array = new int[size_arr];
//        for (int i = 0; i < size_arr; i++)
//        {
//            array[i] = obj.array[i];
//        }
//    }
//    ~ArrayInt()
//    {
//        delete[]array;
//    }
//
//
//    void set_size(int size) {
//        size_arr = size;
//    }
//    int get_size()
//    {
//        return size_arr;
//    }
//    void set_value(int i, int x)
//    {
//        array[i] = x;
//    }
//    int get_value(int i) {
//        return array[i];
//    }
//
//
//    int& operator[](int i)
//    {
//        return array[i];
//    }
//    //by using pre ++ 
//    ArrayInt& operator++()
//    {
//        for (int i = 0; i < size_arr; i++)
//        {
//            ++array[i];
//        }
//        return*this;
//    }
//    //by using post ++
//    ArrayInt& operator++(int)
//    {
//        ArrayInt a(*this);
//        for (int i = 0; i < size_arr; i++)
//        {
//            ++array[i];
//        }
//        return a;
//    }
//    ArrayInt& operator--()
//    {
//        for (int i = 0; i < size_arr; i++)
//        {
//            --array[i];
//        }
//        return*this;
//    }
//    //post
//    ArrayInt& operator--(int)
//    {
//        ArrayInt a(*this);
//        for (int i = 0; i < size_arr; i++)
//        {
//            --array[i];
//        }
//        return a;
//    }
//    void display()
//    {
//        cout << "Array we have : " << endl;
//        for (int i = 0; i < size_arr; i++)
//        {
//            cout << array[i] << " ";
//        }
//        cout << endl;
//    }
//};
//int main()
//{
//    int s = 0;
//    int arr[10];
//    cout << "Enter the size of Array : " << endl;
//    cin >> s;
//    for (int i = 0; i < s; i++)
//    {
//        cout << "Enter the value at index [" << i + 1 << "] : ";
//        cin >> arr[i];
//    }
//    ArrayInt obj1(arr, s);
//    obj1.display();
//
//    cout << "Enter the value of n: ";
//    int n;
//    cin >> n;
//    ArrayInt obj2 = obj1;
//    for (int i = 0; i < n; i++)
//    {
//        ++obj2;
//    }
//    cout << "After incrementing by " << n << " the ";
//    obj2.display();
//    cout << "Enter value of n: " << endl;
//    cin >> n;
//    ArrayInt obj3 = obj1;
//    for (int i = 0; i < n; i++)
//    {
//        --obj2;
//    }
//    cout << "After decrementing  by " << n <<" the ";
//    obj2.display();
//
//    return 0;
//}
