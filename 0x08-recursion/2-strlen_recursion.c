#include "main.h"

/**
  * strlen recursion -returns the length of a string
  *
  * Return: 0
  *
  */
int _strlen_recursion(char *s)

	{

		if (s[0] != '\0')
		return (1 + _strlen_recursion(s + 1));

		return (0);
	}
