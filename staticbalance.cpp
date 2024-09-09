#include <iostream>
using namespace std;

class Account {
private:
    int acc_no;
    double balance;
    static double min_balance;

public:
    // Static member function to display min_balance
    static void displayMinBalance() {
        cout << "Minimum Balance: " << min_balance << endl;
    }

    // Method to read values
    void readValues() {
        cout << "Enter Account Number: ";
        cin >> acc_no;
        cout << "Enter Balance: ";
        cin >> balance;
    }

    // Method to display values
    void displayValues() const {
        cout << "Account Number: " << acc_no << ", Balance: " << balance << endl;
    }
};

// Initialize static member
double Account::min_balance = 1000.0;

int main() {
    Account accounts[5];

    // Read values for 5 accounts
    for (int i = 0; i < 5; ++i) {
        cout << "Enter details for account " << i + 1 << ":" << endl;
        accounts[i].readValues();
    }

    // Display min_balance
    Account::displayMinBalance();

    // Display values for 5 accounts
    for (int i = 0; i < 5; ++i) {
        cout << "Details of account " << i + 1 << ":" << endl;
        accounts[i].displayValues();
    }

    return 0;
}
