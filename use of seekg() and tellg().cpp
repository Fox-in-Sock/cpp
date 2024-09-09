#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream file("example.txt");
    if (!file) {
        cout << "File not found!" << endl;
        return 1;
    }

    file.seekg(0, ios::end);
    int length = file.tellg();
    cout << "Length of the file: " << length << " bytes" << endl;

    file.close();
    return 0;
}
