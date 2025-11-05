#include <iostream>
class Complex {
    double re, im;
public:
    Complex(double r = 0.0, double i = 0.0) : re(r), im(i) {}

    Complex& operator+=(const Complex& other) {
        re += other.re;
        im += other.im;
        return *this;
    }
    friend Complex operator+(Complex lhs, const Complex& rhs) {
        lhs += rhs;
        return lhs;
    }
    friend std::ostream& operator<<(std::ostream& os, const Complex& c) {
        os << c.re;
        if (c.im >= 0) os << '+';
        os << c.im << 'i';
        return os;
    }
};
int main() {
    Complex a(1.5, 2.0);
    Complex b(3.0, -4.5);
    Complex c = a + b;               
    Complex d = a + b + Complex(0.5, 1.5);
    std::cout << "a = " << a << '\n';
    std::cout << "b = " << b << '\n';
    std::cout << "a + b = " << c << '\n';
    std::cout << "a + b + (0.5+1.5i) = " << d << '\n';
    return 0;
}