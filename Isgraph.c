#include <conio.h>
#include <ctype.h>
#include <stdio.h>

int main() {

  if (isgraph('@')) {
    printf(" It is a graphical character. \n");
  } else {
    printf(" It is not a graphical character. \n");
  }

  if (isgraph('\n')) {
    printf(" It is a graphical character. \n");
  } else {
    printf(" It is not a graphical character. \n");
  }

  if (isgraph('Ch')) {
    printf(" It is a graphical character. \n");
  } else {
    printf(" It is not a graphical character. \n");
  }

  if (isgraph('\t')) {
    printf(" It is a graphical character. \n");
  } else {
    printf(" It is not a graphical character. \n");
  }

  if (isgraph('#')) {
    printf(" It is a graphical character. \n");
  } else {
    printf(" It is not a graphical character. \n");
  }

  if (isgraph(' ')) {
    printf(" It is a graphical character. \n");
  } else {
    printf(" It is not a graphical character. \n");
  }

  return 0;
}