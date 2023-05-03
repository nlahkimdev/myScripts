#include <stdio.h>

/**
 * main - sum of digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, sum = 0, m;

	printf("Enter a number:");
	scanf("%d", &n);
	while (n > 0)
	{
		m = n % 10;
		sum = sum + m;
		n = n / 10;
	}
	printf("Sum is=%d", sum);
	return (0);
}
