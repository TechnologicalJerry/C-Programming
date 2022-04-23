#include <stdio.h>
#include <string.h>

int main() {
  char source[] = "GeeksForGeeks";

  char *target = strndup(source, 5);

  printf("%s", target);
  return 0;
}
