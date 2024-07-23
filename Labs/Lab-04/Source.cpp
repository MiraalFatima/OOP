#include<iostream>
using namespace std;
class BiggerInt 
{
private:
	int  *big_int_; 
	int  int_length_;
public:
	BiggerInt()
	{
		big_int_ = NULL;
		int_length_ = 2;
		big_int_ = new int[int_length_];
	}
	BiggerInt(const int* obj, int size)
	{
		int_length_ = size;
	    big_int_ = new int[int_length_];
		for (int i = 0; i < int_length_; i++)
		{
			big_int_[i] = obj[i];
		}
	}
	BiggerInt(const BiggerInt& obj)
	{
		cout << "----Copy Constructor Called----" << endl;
		int_length_ = obj.int_length_;
		big_int_ = new int[int_length_];
		for (int i = 0; i < int_length_; i++)
		{
			big_int_[i] = obj.big_int_[i];
			
		}
		for (int i = 0; i < int_length_; i++)
		{
			cout << big_int_[i] << " ";

		}
	}
	void assign(const BiggerInt& obj)
	{
		if (big_int_!=NULL)
		{
			delete big_int_;
			big_int_ = NULL;
		}
		int_length_ = obj.int_length_;
		 big_int_= new int[int_length_];
		for (int i = 0; i < int_length_; i++)
		{
			big_int_[i] = obj.big_int_[i];
		}
	}
	void aasign(const int* big_int, int size)
	{

		if (big_int_ != NULL)
		{
			delete big_int_;
			big_int_ = NULL;
		}
		int_length_ =size;
		big_int_ = new int[int_length_];
		for (int i = 0; i < int_length_; i++)
		{
			big_int_[i] = big_int[i];
		}
	}
	void append(const BiggerInt &obj)
	{
		if (big_int_ != NULL)
		{
			delete big_int_;
		}
		int* New_big_int = new int[int_length_ + obj.int_length_];
		for (int i = 0; i < int_length_; i++)
		{
			New_big_int[i] = big_int_[i];
		}
		int k = 0;
		for (int i = int_length_; i < int_length_ + obj.int_length_; i++)
		{
			New_big_int[int_length_] = obj.big_int_[k];
			k++;
		}
	}
	void append(const int* big_int, int size)
	{
		if (big_int != NULL)
		{
			delete big_int;
		}
		int* New_big_int = new int[size];
		for (int i = 0; i < size; i++)
		{
			New_big_int[i] = big_int[i];
		}
		int k = 0;
		for (int i = int_length_; i < int_length_ + size; i++)
		{
			New_big_int[i] = big_int_[k];
			k++;
		}
	}
	int compareTo(const BiggerInt& obj)
	{
	
		for (int i = 0; i < int_length_; i++)
		{
			if (obj.big_int_[i] > big_int_[i])
			{
				return 2;
			}
			else if (obj.big_int_[i] == big_int_[i])
			{
				return 2;
			}
			else if (obj.big_int_[i] <big_int_[i])
			{
				return 1;
			}

		}

	}
	int compareTo(const int* big_int, int size) {
		for (int i = 0; i < size; i++)
		{
			if (big_int[i] > big_int_[i])
			{
				return 2;
			}
			else if (big_int[i] == big_int_[i])
			{
				return 2;
			}
			else if (big_int[i] < big_int_[i])
			{
				return 1;
			}

		}
	}
	void display()
	{
		if (big_int_ == nullptr)
		{
			cout << "----No value is assigned----" << endl;
		}
		else
		{
			for (int i = 0; i < int_length_; i++)
			{
				cout << big_int_[i] << " ";

			}
		}
	}
	~BiggerInt() 
	{
		if (big_int_ = nullptr)
		{
			delete big_int_;
		}

	}
};
int main()
{
	
	int *ptr;
	int size = 0;
	cout << "Enter the size of Array : ";
	cin >> size;
	 ptr = new int[size];
	 cout << "Enter the values of the array : " << endl;
	for (int i = 0; i < size; i++)
	{
		
		cin >> ptr[i];
	}
	BiggerInt obj(ptr, size);
	BiggerInt obj1 = obj;
	obj.assign(obj1);
	obj.aasign(ptr, size);
	obj.append(obj1);
	obj.append(ptr, size);
	obj.compareTo(obj1);
	obj.compareTo(ptr,size);
	obj.display();
}