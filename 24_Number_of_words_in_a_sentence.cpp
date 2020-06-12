#include <iostream>
using namespace std;

int main() {
  char a[100];
  int i, count = 0;

  cout << "Enter a sentence : ";
  cin.getline(a,100);
  for (i=0; a[i]!= '\0'; i++)
  {
    if (a[i]==' ' || a[i+1]=='\0')
    {
      count++;
    }
  }
  cout << "Number of woerds in the sentence is : " << count;
  return 0;
}


//Run the code at : https://repl.it/@Aravind1444/numberofwordsinasentencecpp
