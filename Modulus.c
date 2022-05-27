#include <iostream>
using namespace std;
int main() {
  int x = 14;
  int y = 6;
  int z = 3;
  int modulo = x % y % z; // x % y returns 2, and 2 % z returns 2
  cout << "Modulus is : " << modulo;
}