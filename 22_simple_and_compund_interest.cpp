#include <iostream>
#include <bits/stdc++.h> 
using namespace std;

class bank
{
  private:
    float p;
    float sr;
    float cr;
    float t;
    float si;
    float ci;
    float n=2;
    float amount_si;
    float amount_ci;
  
  public: 
    void read_i() {
      cout << "Enter the principal amount : ";
      cin >>p;
      cout << "Enter the rate of Simple Interest : ";
      cin >> sr;
      cout << "Enter the rate of Compund Interest : ";
      cin >> cr;
      cout << "Enter the number of years : ";
      cin >> t;

      si = (p*sr*t)/100;
      amount_si = si+p;
      ci = p*(pow((1 + cr / 100), t)); 

    } 
    void show_i()
    {
      cout << endl;
      cout<< "Simple Interest is : Rs " << si <<endl;
      cout<< "Compund Interest is : Rs " << si <<endl;
      cout << endl;
      cout << "Total amount with Simple Interest is : Rs " << amount_si <<endl; 
      cout << "Total amount with Compund Interest is : Rs " << ci <<endl; 
    }

};

int main() {
  bank b;
  b.read_i();
  b.show_i();
}


// run this program at : https://repl.it/@Aravind1444/simpleandcompundinterstincpp
