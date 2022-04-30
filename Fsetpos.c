#include <stdio.h>
int main() {
  FILE *fp;
  fpos_t position;

  fp = fopen("myfile.txt", "w+");
  fgetpos(fp, &position);
  fputs("HelloWorld!", fp);

  fsetpos(fp, &position);

  fputs("geeksforgeeks", fp);
  fclose(fp);

  return (0);
}
