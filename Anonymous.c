#include<stdio.h>
struct Scope
{
	struct
	{
		char alpha;
		int num;
	};
};

int main()
{
	struct Scope x;
	x.num = 65;
	x.alpha = 'B';

	printf("x.alpha = %c, x.num = %d", x.alpha, x.num);

	return 0;
}
