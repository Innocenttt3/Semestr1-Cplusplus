#include <iostream>

template<typename T>
void swap(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}

int main() {
    int a = 5, b = 10;
    std::cout << "a: " << a << ", b: " << b << std::endl;
    swap(a, b);
    std::cout << "a: " << a << ", b: " << b << std::endl;

    double c = 1.5, d = 2.5;
    std::cout << "c: " << c << ", d: " << d << std::endl;
    swap(c, d);
    std::cout << "c: " << c << ", d: " << d << std::endl;

    char e = 'a', f = 'b';
    std::cout << "e: " << e << ", f: " << f << std::endl;
    swap(e, f);
    std::cout << "e: " << e << ", f: " << f << std::endl;

    return 0;
}