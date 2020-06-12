#include <iostream>
using namespace std;

int Search(int A[], int n, int x)
{
  int i;
  for (i=0;i<n;i++)
  {
    if (A[i]==x)
    {
      return i;
    }
  }
  return -1;
};

int main() {
  int A[10];
  int n,x;
  cout << "Enter the size of the array : " ;
  cin >> n;
  cout << "Enter the elements of the array : " << endl;
  for (int i=0;i<n;i++)
  {
    cin >> A[i];
  }
  cout << "Enter the search element or number : " ;
  cin >> x;
  int index = Search(A,n,x);
  if (index == -1)
  {
    cout << "The element " << x << " is not present in the array";
  }
  else
  {
    cout << "The element " << x << " is present in the array";
  }
  return 0;
}


//try the code at : https://repl.it/@Aravind1444/LinearSearchAlgoinCPP#main.cpp
