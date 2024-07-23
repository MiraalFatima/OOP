#include <iostream>
using namespace std;

template <typename T>
class Pair {
private:
    T var1;
    T var2;
    static int count;
public:
    Pair(T a, T b) {
        var1 = a;
        var2 = b;
        count++;
    }
    inline T getmax() const {
        if (var1 >= var2) {
            return var1;
        }
        return var2;
    }
    T getmin() const;

    static void SetCount(T val) {
        count = val;
    }
    static int GetCount() {
        return count;
    }
};

template <typename T>
int Pair<T>::count = 0;

template <typename T>
T Pair<T>::getmin() const {
    if (var1 <= var2) {
        return var1;
    }
    return var2;
}

int main() {
    Pair<double> myobject1(1.012, 1.01234);
    Pair<double> myobject2(2.012, 2.01234);
    Pair<double> myobject3(3.012, 3.01234);
    Pair<int> myobject4(1, 1);
    Pair<int> myobject5(2, 4);

    cout << "Number of double objects: " << Pair<double>::GetCount() << endl;
    cout << "Number of int objects: " << Pair<int>::GetCount() << endl;

    return 0;
}