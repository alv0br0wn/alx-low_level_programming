#include"main.h"

/**
 * _abs - function that computes the absolute
 *       value of an integer
 *
 * @n: take input valaues for the function
 *
 * Return: Always 0 (Success)
*/

int _abs(int n)
{
	/**
	 * if int value is a negative
	 * multiply by -1 to get a positive value
	*/
	if (n >= 0)
	{
		return (n);
	}
	return (-n);


}
