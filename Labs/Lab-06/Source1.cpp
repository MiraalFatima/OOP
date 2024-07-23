#include<iostream>
using namespace std;
class Complex
{
private:
    int real;
    int imaginary;
public:
    Complex(int r = 0 , int i = 0)
    {
        real = r;
        imaginary = i;
    }
   /* Complex operator+(Complex const& obj)
    {
        Complex result;
        result.real = real + obj.real;
        result.imaginary = imaginary + obj.imaginary;
        return result;
    }*/
    bool operator==(const Complex& obj) const
    {
        return (real == obj.real) && (imaginary == obj.imaginary);
    }
    bool operator!=(const Complex& obj) const
    {
        return !(*this == obj);
    }
    Complex operator-(const Complex& obj) const
    {
        return Complex(real - obj.real, imaginary - obj.imaginary);
    }


    void getdata()
    {

        cout << "Enter the real part : " << endl;
        cin >> real;
        cout << "Enter the imaginary part : " << endl;
        cin >> imaginary;
    }
    void print()
    {
        cout << this->real << " + " << this->imaginary << " i" << endl;

    }
    void Display()
    {
        cout << this->real << " + " << this->imaginary << " i" << endl;

    }

};
int main()
{
    Complex C1;
    Complex C2(5, 6);
    Complex C3;
    cout << "----Input a complex number----" << endl;
    C3.getdata();
    C1.print();
    C2.print();
    C3.print();
    if (C1 == C2)
    {
        cout << "C1 == C2" << endl;
    }
    else
        cout << "C1 ! = C2" << endl;
    if (C1 != C3)
    {
        cout << "C1 ! = C3" << endl;
    }
    else
        cout << "C1 ==  C3" << endl;
    Complex C4 = C2 - C3;
    C4.Display();
    system("pause");
    return 0;
}