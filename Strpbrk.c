#include <stdio.h>
#include <string.h>

int main()
{
	char s1[] = "victory";

	char s2[] = "a23";
	char s3[] = "i22";
	char* r, *t;

	r = strpbrk(s1, s2);
	t = strpbrk(s1, s3);

	if (r != 0)
		printf("Congrats u have won");
	else
		printf("Better luck next time");

	if (t != 0)
		printf("\nCongrats u have won");
	else
		printf("Better luck next time");

	return (0);
}
