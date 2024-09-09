#include <iostream>
#include <fstream>
using namespace std;

int main() {
    // Create an input file stream
    ifstream inFile("data.txt");

    // Check if the file was successfully opened
    if (!inFile) {
        cerr << "Unable to open file data.txt" << endl;
        return 1; // Return with error code
    }

    string line;
    // Read the file line by line and display the content
    while (getline(inFile, line)) {
        cout << line << endl;
    }

    // Close the file
    inFile.close();

    return 0;
}
