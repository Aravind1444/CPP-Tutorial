#include <iostream>
using namespace std;

class A
{
  public:
    int a;
    A()
    {
      cout << "A - Activated" << endl;
    }
    ~A()
    {
      cout << "A - Devactivated" << endl;
    }
};

class B: public A
{
  public:
    int b;
    B()
    {
      cout << "B - Activated" << endl;
    }
  ~B()
  {
    cout << "B - Devactivated" << endl;
  }
};

int main() {
  A ob1;
  B ob2;
  return  0;
}

//try the code at : https://repl.it/@Aravind1444/ConstructorsandDestructors#main.cpp
