#include <stdio.h>
int main(void) {
  auto int view();
  view();
  printf("Main\n");

  int view() {
    printf("View\n");
    return 1;
  }

  printf("GEEKS");
  return 0;
}
