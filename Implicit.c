#include <stdio.h>
fun(int x) { return x * x; }
int main(void) {
  printf("%d", fun(10));
  return 0;
}
