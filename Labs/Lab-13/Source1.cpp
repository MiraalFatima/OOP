#include <iostream>
using namespace std;

template <typename T>
class Pair {
private:
    T var1;
    T var2;
public:
    Pair(T a, T b) {
        var1 = a;
        var2 = b;
    }
    inline T GetMax() const {
        if (var1 >= var2) {
            return var1;
        }
        return var2;
    }
    T GetMin() const;
};

template <typename T>
T Pair<T>::GetMin() const {
    if (var1 <= var2) {
        return var1;
    }
    return var2;
}

int main() {
    Pair<double> myobject(1.012, 1.01234);
    cout << myobject.GetMax() << endl;
    return 0;
}