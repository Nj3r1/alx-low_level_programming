#include <stdio.h>
/**
   *main - Prints 3 combination of numbers
    *
     *Return: Always (Success)
      */
int main(void)
{
	int c, i, k, j;

	for (c = 48; c <= 57; c++)
	{
		for (i = 58; i <= 67; i++)
		{
			for (k = 78; k <= 87; k++)
			{
				for (j = 88; j <= 97; j++)
				{
					if (((k + j) > (c + i) &&  k >= c) || c < k)
					{
						putchar(c);
						putchar(i);
						putchar(' ');
						putchar(k);
						putchar(j);
						if (c + i + k + j == 227 && c == 57)
						{
							break;
						}
						else
						{
							putchar(',');
							putchar(' ');
						}
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

