#include <stdio.h>
/**
  *main - Entry point. prints all arguments it receives
  *@argc: argument count
  *@argv: array containing the program command line arguments
  *
  *Return: 0 (success)
  */
int main(int argc, char **argv)
{
	int i = 0;

	for (; i < argc; i++)
		printf("%s\n", *argv++);
	return (0);
}
