#include "main.h"

/**
 * main - Check description
 * Description: It prints 10 times the alphabet, in lowercase, followed by a new line.
 * Return: 0.
 */

void print_alphabet_x10(void);
{
	char alpha;
	int t;

	for(t=1; t<=10; t++)
	{
		for(alpa="a"; alpha<="z"; alpha++)
		{
			_putchar(alpha);
		}
	}
	_putchar("\n");
	return(0); 
}
