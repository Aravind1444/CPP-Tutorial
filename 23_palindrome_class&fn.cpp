#include <iostream>
#include <cstring>
using namespace std;

class Palindrome
{
  public:
    int i,l;
    string stringin;
    int flag = 0;
    
  void palindrome()
  {
    for(i=0;i < l ;i++){
    if(stringin[i] != stringin[l-i-1]){
      flag = 1;
      break;
      };
    };
    if (flag) {
      cout << stringin << " is not a palindrome" << endl; 
      }
    else {
      cout << stringin << " is a palindrome" << endl; 
      };
  };
};

int main(){
  int length,l;
  char input[20];
  cout << "Enter a string or number: "; cin >> input;
  length = strlen(input);
  Palindrome obj1;
  obj1.l = length;
  obj1.stringin = input;
  obj1.palindrome();

}

//run this program at : https://repl.it/@Aravind1444/palindromcfin-cpp
