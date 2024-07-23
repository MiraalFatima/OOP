#include <iostream>
using namespace std;

template <typename T>
class Container {
private:
    T data;
public:
    Container(T arg) {
        data = arg;
    }
    T increase() {
        return ++data;
    }
    T get_element() const {
        return data;
    }
};

template <>
char Container<char>::increase() {
    return ++data;
}

template <>
char Container<char>::get_element() const {
    if (data >= 'a' && data <= 'z') {
        return data - 'a' + 'A';
    }
    return data;
}

int main() {
    Container<int> myint(7);
    Container<char> mychar('j');

    cout << myint.increase() << endl;
    cout << mychar.get_element() << endl;

    return 0;
}