#include "main.h"
/**
  * print_alphabet - Prints the lowercase alphabet.
  * This function prints all lowercase alphabets from 'a' to 'z' followed by a newline character.
  * Return: None (void)
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
