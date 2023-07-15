#include <stdlib.h>
#include <time.h>
#include <stdio.h>
int main(void)
{  	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (!n)
		printf("%d is zero\n", n);
	else
		(n > 0) ? printf("%d is positive\n", n) : printf("%d is negative\n", n);
	return (0);
}
