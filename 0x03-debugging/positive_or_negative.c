#include <stdlib.h>
#include <stdio.h>
#include <main.h>
/**
 *main - entry point 
 * Return: Always 0
 */
int main(void)
{
	int n;

	srand(main(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);
	return (0);
}
