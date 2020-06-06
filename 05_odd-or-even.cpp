//program to check whether a number is odd or even. If else condition is used here

#include <iostream>
using namespace std;

int main() {
int a;
cout << "Enter the number : " ;
cin >> a; //assigning input to a
if(a%2 == 0){ //checking whether the remainder is equal to 0 or not
  cout << "The number you entered is " <<a <<". It is an EVEN number" <<endl;
}
else {
    cout<<"The number you entered is " <<a <<". It is an ODD number" <<endl;
  }

}
