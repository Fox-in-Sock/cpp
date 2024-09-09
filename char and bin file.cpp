#include <iostream>
#include <fstream>
using namespace std;

int main() {
    // Writing to a text file
    ofstream outFile("example.txt");
    outFile << "Hello, World!" << endl;
    outFile.close();

    // Reading from a text file
    ifstream inFile("example.txt");
    string line;
    while (getline(inFile, line)) {
        cout << line << endl;
    }
    inFile.close();

    return 0;
}


//binary
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    // Writing to a binary file
    ofstream outFile("example.bin", ios::binary);
    int number = 12345;
    outFile.write(reinterpret_cast<char*>(&number), sizeof(number));
    outFile.close();

    // Reading from a binary file
    ifstream inFile("example.bin", ios::binary);
    int readNumber;
    inFile.read(reinterpret_cast<char*>(&readNumber), sizeof(readNumber));
    inFile.close();

    cout << "Number read from file: " << readNumber << endl;

    return 0;
}
