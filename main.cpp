#include <iostream>
#include <algorithm>
using namespace std; 

int recurison(int a)
{
  int z = 1;
  for(int i = a; i > 0; i--)
  {
    z = z * i;
  }
  return z;
}

int main() {
  int x;
  cout << "Enter the number for Factorial: ";
  cin >> x;
  cout << "Number produced: " << recurison(x) << endl;
}