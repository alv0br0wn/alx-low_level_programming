#include <stdio>
/**
  *main - Entry point
  *
  *Return: always (0)
  */
int main(void)
{
	int n = 97;
	int m = 65;

	while (n <= 122)
	{
		putchar(n);
		n++;
	}
	while (m <= 90)
	{
		putchar(m);
	}
	putchar('\n');
	m++;
	return (0);
}
