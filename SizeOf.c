#include <stdio.h>
  
int main() {
    int a = 5;
    int b = sizeof(a = 6);
    printf("a = %d,  b = %d\n", a, b);
    return 0;
}