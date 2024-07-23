#include <iostream>
using namespace std;

template <typename T>
T GetMax(T x, T y) {
    if (x >= y) {
        return x;
    }
    return y;
}

template <typename T>
T GetMin(T x, T y) {
    if (x <= y) {
        return x;
    }
    return y;
}

int main() {
    int i = 5, j = 6, k;
    long l = 10, m = 5, n;
    char c1 = 'a', c2 = 'c', c3;
    k = GetMax<int>(i, j);
    n = GetMin<long>(1, m);
    c3 = GetMin<char>(c1, c2);
    cout << k << endl;
    cout << n << endl;
    cout << c3 << endl;

    return 0;
}