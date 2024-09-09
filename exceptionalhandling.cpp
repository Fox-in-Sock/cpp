#include <iostream>
using namespace std;

double divide(double numerator, double denominator) {
    if (denominator == 0) {
        throw runtime_error("Division by zero error");
    }
    return numerator / denominator;
}

int main() {
    double num, denom, result;

    cout << "Enter numerator: ";
    cin >> num;
    cout << "Enter denominator: ";
    cin >> denom;

    try {
        result = divide(num, denom);
        cout << "Result: " << result << endl;
    } catch (const runtime_error &e) {
        cout << "Exception caught: " << e.what() << endl;
    }

    return 0;
}
