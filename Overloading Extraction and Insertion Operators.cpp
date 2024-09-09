#include <iostream>
using namespace std;

class Complex {
private:
    int real, imag;
public:
    Complex(int r = 0, int i = 0) : real(r), imag(i) {}

    // Overloading the insertion operator
    friend ostream& operator<<(ostream& out, const Complex& c) {
        out << c.real << "+i" << c.imag;
        return out;
    }

    // Overloading the extraction operator
    friend istream& operator>>(istream& in, Complex& c) {
        cout << "Enter real part: ";
        in >> c.real;
        cout << "Enter imaginary part: ";
        in >> c.imag;
        return in;
    }
};

int main() {
    Complex c1;
    cout << "Enter a complex number:" << endl;
    cin >> c1;
    cout << "The complex number is: " << c1 << endl;
    return 0;
}
