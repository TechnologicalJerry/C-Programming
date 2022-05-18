#include <stdio.h>
int main(void)
{

	char* s = "B\x4a";
	printf("%s", s);
	return 0;
}
