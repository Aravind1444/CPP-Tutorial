//program to print the sum of first n intergers

#include <iostream>
using namespace std;

int main() {
int i,n,sum=0; //declaing 3 variables 
cout << "Enter the value of n : "; //taking input from user
cin >> n;
for (i=0; i<=n; i++) //implementing a for loop
{
  sum = sum+i; //incrementing the sum accordingly
}
cout << "The sum of the first " <<n << " numbers is : " <<sum <<endl; //printing the final output
}
 //putting the final printing statemnet inside the loop will lead to pritning the statement each time while running through the loop
