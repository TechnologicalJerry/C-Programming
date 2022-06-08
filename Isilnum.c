#include <conio.h>
#include <stdio.h>
int main() {

  int ch1 = 'A';
  int ch2 = 'e';
  int ch3 = '$';
  int ch4 = '7';
  int ch5 = ' ';
  int ch6 = '0';

  if (isalnum(ch1)) {
    printf(" '%c' is an alphanumeric character. \n", ch1);
  } else {
    printf("'%c' is not an alphabetic or numeric character. \n", ch1);
  }

  if (isalnum(ch2)) {
    printf(" '%c' is an alphanumeric character. \n", ch2);
  } else {
    printf("'%c' is not an alphabetic or numeric character. \n", ch2);
  }

  if (isalnum(ch3)) {
    printf(" '%c' is an alphanumeric character. \n", ch3);
  } else {
    printf("'%c' is not an alphabetic or numeric character. \n", ch3);
  }

  if (isalnum(ch4)) {
    printf(" '%c' is an alphanumeric character. \n", ch4);
  } else {
    printf(" '%c' is not an alphabetic or numeric character. \n", ch4);
  }

  if (isalnum(ch5)) {
    printf(" '%c' is an alphanumeric character. \n", ch5);
  } else {
    printf(" '%c' is not an alphabetic or numeric character. \n", ch5);
  }

  if (isalnum(ch6)) {
    printf(" '%c' is an alphanumeric character. \n", ch6);
  } else {
    printf(" '%c' is not an alphabetic or numeric character. \n", ch6);
  }

  return 0;
}