#include <math.h>
#include <stdio.h>
#include <string.h>
int main() {
  char hex[17];
  long long decimal, place;
  int i = 0, val, len;
  decimal = 0;
  printf("Enter any hexadecimal number: ");
  gets(hex);
  len = strlen(hex);
  len--;

  while (hex[i] != '\0') {

    if (hex[i] >= '0' && hex[i] <= '9') {
      val = hex[i] - 48;
    } else if (hex[i] >= 'a' && hex[i] <= 'f') {
      val = hex[i] - 97 + 10;
    } else if (hex[i] >= 'A' && hex[i] <= 'F') {
      val = hex[i] - 65 + 10;
    }

    decimal += val * pow(16, len);
  }
}