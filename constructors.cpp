#include<iostream>
using namespace std;
class Emp{
  char name[30];
  char company[30];
  int age;
public:
  void intro(){
    cout<<"enter name";
    cout<<"enter cmp";
    cout<<"enter age";
}
  Emp(char Name,char cmp, int Age){
      name = Name;
      company = cmp;
      age = Age;
  }
};

int main(){
  Emp e1=Emp("fso","petal",18);
  e1.intro();
return 0;
}
/*
#include <iostream>
#include <string>
using namespace std;

class Emp {
public:
    string name;
    string company;
    int age;

    // Constructor
    Emp(string Name, string cmp, int Age) : name(Name), company(cmp), age(Age) {}

    // Method to introduce the employee
    void intro() {
        cout << "Name: " << name << endl;
        cout << "Company: " << company << endl;
        cout << "Age: " << age << endl;
    }
};

int main() {
    // Create an Emp object
    Emp e1("sak", "petal", 18);

    // Call the intro method to print employee details
    e1.intro();

    return 0;
}
*/
