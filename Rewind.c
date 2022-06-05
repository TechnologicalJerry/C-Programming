#include <conio.h>
#include <stdio.h>
void main() {
  FILE *fp;
  char c;
  clrscr();
  fp = fopen("file.txt", "r");

  while ((c = fgetc(fp)) != EOF) {
    printf("%c", c);
  }

  rewind(fp);

  while ((c = fgetc(fp)) != EOF) {
    printf("%c", c);
  }

  fclose(fp);
  getch();
}