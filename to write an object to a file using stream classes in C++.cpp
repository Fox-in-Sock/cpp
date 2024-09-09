#include <iostream>
#include <fstream>
using namespace std;

class Student {
private:
    string name;
    int age;
public:
    Student(string n = "", int a = 0) : name(n), age(a) {}

    // Overloading the insertion operator to write object to file
    friend ofstream& operator<<(ofstream& out, const Student& s) {
        out << s.name << endl;
        out << s.age << endl;
        return out;
    }

    // Overloading the extraction operator to read object from file
    friend ifstream& operator>>(ifstream& in, Student& s) {
        getline(in, s.name);
        in >> s.age;
        in.ignore(); // To ignore the newline character after age
        return in;
    }
};

int main() {
    // Create a Student object
    Student s1("John Doe", 20);

    // Write the object to a file
    ofstream outFile("student.txt");
    if (outFile.is_open()) {
        outFile << s1;
        outFile.close();
        cout << "Object written to file successfully." << endl;
    } else {
        cerr << "Unable to open file for writing." << endl;
    }

    // Read the object from the file
    Student s2;
    ifstream inFile("student.txt");
    if (inFile.is_open()) {
        inFile >> s2;
        inFile.close();
        cout << "Object read from file successfully." << endl;
        cout << "Name: " << s2.name << ", Age: " << s2.age << endl;
    } else {
        cerr << "Unable to open file for reading." << endl;
    }

    return 0;
}
