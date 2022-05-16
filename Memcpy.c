#include <stdio.h>
#include <string.h>

void myMemMove(void *dest, void *src, size_t n) {
  char *csrc = (char *)src;
  char *cdest = (char *)dest;

  char *temp = new char[n];

  for (int i = 0; i < n; i++)
    temp[i] = csrc[i];

  for (int i = 0; i < n; i++)
    cdest[i] = temp[i];

  delete[] temp;
}

int main() {
  char csrc[100] = "Geeksfor";
  myMemMove(csrc + 5, csrc, strlen(csrc) + 1);
  printf("%s", csrc);
  return 0;
}
