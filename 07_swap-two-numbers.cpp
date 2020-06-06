//program to swap to numbers(integers)

#include <iostream>
using namespace std;

int main() {
int a,b,c;
cout << "Enter the first number (a) : ";
cin >>a;
cout << "Enter the second number (b) : ";
cin >>b;
cout << "You have entered a = " <<a <<" and b = " <<b <<endl;
a = a*b; //getting the product
b = a/b; //product divided by second number gives first number
a = a/b; //product divided by b (now initial first number) gives the initial second number
cout <<"After swapping, a = " <<a << " and b = " <<b <<endl; 
}
