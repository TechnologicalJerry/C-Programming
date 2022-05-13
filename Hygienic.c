#define INCI(i)                                                                \
  do {                                                                         \
    int m = 0;                                                                 \
    ++i;                                                                       \
  } while (0)
int main(void) {
  int x = 4, y = 8;

  INCI(x);

  INCI(y);

  printf("x = %d, y = %d\n", x, y);
  return 0;
}
