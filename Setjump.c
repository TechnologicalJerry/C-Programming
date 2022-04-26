#include <setjmp.h>
#include <stdio.h>

jmp_buf buf;
void func() {
  printf("Welcome to GeeksforGeeks\n");

  longjmp(buf, 1);

  printf("Geek2\n");
}

int main() {
  if (setjmp(buf))
    printf("Geek3\n");
  else {
    printf("Geek4\n");
    func();
  }
  return 0;
}
