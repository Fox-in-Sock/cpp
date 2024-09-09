#include <iostream>
using namespace std;

class Distance {
private:
    int feet;
    float inches;

public:
    Distance(int f, float i) : feet(f), inches(i) {}

    // Conversion function to convert Distance to float (meters)
    operator float() const {
        return feet * 0.3048 + inches * 0.0254;
    }

    // Conversion function to convert Distance to int (centimeters)
    operator int() const {
        return static_cast<int>((feet * 30.48) + (inches * 2.54));
    }

    void display() const {
        cout << feet << " feet " << inches << " inches" << endl;
    }
};

int main() {
    Distance d(5, 10.5);

    // Convert to meters
    float meters = d;
    cout << "Distance in meters: " << meters << " m" << endl;

    // Convert to centimeters
    int centimeters = d;
    cout << "Distance in centimeters: " << centimeters << " cm" << endl;

    return 0;
}
