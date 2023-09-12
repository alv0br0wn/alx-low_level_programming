#include "main.h"
/**
  *print_alphabets - print alphabets in lowcase.
  *This function prints all lowercase alphabets.
  *Return: Always 0 (success)
  */
void print_alphabet(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
