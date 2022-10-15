#include <stdib.h>
#include <time.h>

/**
 * main - print if the number is positive,negative or 0
 * Return: Always 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - Rand_max / 2

		if (n > 0)
		{
			printf("%d is postive\n", n);
		}
		else if (n == 0)
		{
			printf("%d is zero\n", n);
		}
		else
		{
			printf("%d is negative\n", n);
		}
	return (0);
}
