#include<iostream>
using namespace std;
class Base{
  public:
  int vbase=1;
  virtual void display(){
  cout<<"the vbase is="<<vbase;
  }
};

class Dclass : public Base{
  public:
  int vderived=2;
    void display(){
      cout<<"the vbase is="<<vbase<<endl;
      cout<<"the vderived is="<<vderived<<endl;
    }
};

int main(){
  Base * bptr;
  Base obase;
  Dclass od;
  bptr= &od;
  bptr->display();
  return 0;
}