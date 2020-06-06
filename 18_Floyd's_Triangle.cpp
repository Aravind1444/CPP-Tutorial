#include <iostream>
using namespace std;

int main() {
  int rows,n=1;
  cout << "Enter the number of rows : ";
  cin >> rows;
  for (int i=0; i<=rows; i++) {
    for (int j=1; j<=i; j++) {
      cout << n << " ";
      n++;
      }
    cout << endl;
    }
}
