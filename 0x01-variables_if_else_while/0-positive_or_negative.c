#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - The beginig of the program 
 *
 * Description: This programs checks the given number is positive or negative.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{  
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (!n)
		printf("%d is zero\n", n);
	else
		(n > 0) ? printf("%d is positive\n", n) : printf("%d is negative\n", n);
	return (0);
}
