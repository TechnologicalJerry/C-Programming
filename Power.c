#include <math.h>
#include <stdio.h>

int main() {
  int a, b;

  a = (int)(pow(5, 2) + 1e-9);
  b = round(pow(5, 2));
  printf("%d \n%d", a, b);

  return 0;
}
