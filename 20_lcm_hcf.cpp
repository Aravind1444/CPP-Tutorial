#include<iostream>
using namespace std;
int main()
{
  int a, b, x, y, temp, hcf, lcm;
  cout<<"Enter Two Numbers : ";
  cin>>x>>y;
  a=x;
  b=y;
  while(b!=0)
  {
    temp=b;
    b=a%b;
    a=temp;
    }
  hcf=a;
  lcm=(x*y)/hcf;
  cout << endl;
  cout<<"HCF : "<<hcf<< endl;
  cout<<"LCM : "<<lcm<< endl;
   return 0;
}

//run the program at : https://repl.it/@Aravind1444/LCMHCFCPP
