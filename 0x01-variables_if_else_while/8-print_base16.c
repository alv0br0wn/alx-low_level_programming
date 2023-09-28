#include <stdio.h>
/**
  *main - Entry point
  *Description: 'print numbers of base 16'
  *Return: Always 0
  */
int main(void)
{
	int n;
	int y;

	for (n = 48; n <= 57; n++)
	{
		putchar(n);
	}
	for (y = 97; y <= 102; y++)
	{
	putchar(y);
	}
	putchar('\n');
	return (0);
}
