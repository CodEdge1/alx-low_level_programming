#include "main.h"
#include <stdio.h>

/**
  * print_alphabet_x10 - Make alphabet x10 times
  *
  * Return: void
  */

void print_alphabet_x10(void)
{
	char alpha;
	int t;

	for (t = 1; t <= 10; t++)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
		{
			_putchar(alpha);
		}
	}
	_putchar('\n');
}
