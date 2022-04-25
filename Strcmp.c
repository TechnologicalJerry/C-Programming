#include <stdio.h>
#include <string.h>
int main() {
  char leftStr[] = "bfb";
  char rightStr[] = "gfg";

  int res = strcmp(leftStr, rightStr);

  if (res == 0)
    printf("Strings are equal");
  else
    printf("Strings are unequal");

  printf("\nValue returned by strcmp() is: %d", res);

  return 0;
}
