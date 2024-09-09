/*Friend Function in C++
A friend function is a function that is not a member of a class but has access to its private and protected members. It is declared using the friend keyword inside the class whose private and protected members it needs to access.

Concept of Friend Function
Access Control: A friend function can access private and protected members of the class in which it is declared as a friend.
Declaration: It is declared inside the class with the friend keyword but defined outside the class.
Not a Member: Although it has access to the class’s private and protected members, it is not a member function of the class.
How It Violates Data Hiding Principle
The principle of data hiding in object-oriented programming ensures that the internal state of an object is hidden from the outside world and can only be accessed through public methods. A friend function violates this principle by accessing private and protected members directly, bypassing the encapsulation provided by the class.
*/

#include <iostream>
using namespace std;

class Box {
private:
    double width;

public:
    Box(double w) : width(w) {}

    // Friend function declaration
    friend void printWidth(Box b);
};

// Friend function definition
void printWidth(Box b) {
    cout << "Width of box: " << b.width << endl;
}

int main() {
    Box box(10.5);
    printWidth(box); // Accessing private member width through friend function

    return 0;
}
