#include <iostream>
using namespace std;

class A
{
  public:
    int a;
    A()
    {
      cout << "A is Activated" << endl;
    }
    ~A()
    {
      cout << "A is Devactivated" << endl;
    }
};

class B: public A
{
  public:
    int b;
    B()
    {
      cout << "B is Activated" << endl;
    }
  ~B()
  {
    cout << "B is Devactivated" << endl;
  }
};

int main() {
  A ob1;
  B ob2;
  return  0;
}

//try the code at : https://repl.it/@Aravind1444/ConstructorsandDestructors#main.cpp
