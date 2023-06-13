#include "main.h"
 
  /*
  * Function that returns a factorial of a given number
  *
  * Return: int factorial
  */

int factorial(int n)
{
	 if (n == 0)
{
		 return (0);
	}
	 	else 
		{
			return (n * factorial(n - 1));

		}
}
	


