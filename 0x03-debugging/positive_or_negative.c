#include "main.h"
/**
  *positive_or_negative - Determines if a number is positive, negative or zero.
  *@i: The interger to be checked.
  *
  *This function takes an integer as input and prints a message indicating
  *whether the input value is positive, negative, or zero.
 */
void positive_or_negative(int i)
{
	if (i > 0)
		printf("%d is positive\n", i);
	else if (i < 0)
		printf("%d is negative\n", i);
	else
		printf("%d is zero\n", i);
}
