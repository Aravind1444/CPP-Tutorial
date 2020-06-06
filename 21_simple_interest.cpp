#include <iostream>
using namespace std;

class bank
{
  private:
    float p;
    float r;
    float t;
    float si;
    float amount;
  
  public: 
    void read_si() {
      cout << "Enter the principal amount : ";
      cin >>p;
      cout << "Enter the rate of Interest : ";
      cin >> r;
      cout << "Enter the number of years : ";
      cin >> t;

      si = (p*r*t)/100;
      amount = si+p;
    } 
    void show_si()
    {
      cout<< "Interest is : Rs " << si <<endl;
      cout << "Total amount is : Rs " << amount <<endl; 
    }

};

int main() {
  bank b;
  b.read_si();
  b.show_si();
}


// run this program at : https://repl.it/@Aravind1444/SimpleInterestincpp
