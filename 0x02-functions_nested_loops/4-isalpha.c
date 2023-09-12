#include "main.h"
/**
 * _isalpha - Checks if a character (lowercase or uppercase).
 * @c: The character to be checked.
 * Return: 1 if c is a letter, lowercase or uppercase; 0 otherwise.
 */
int _isalpha(int c)
{
	if (islower(c) || isupper(c))
		return (1);
	else
		return (0);
