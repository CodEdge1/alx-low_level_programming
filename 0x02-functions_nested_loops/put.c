#include <stdio.h>
#include "main.h"
#include <ctype.h>

/**
 * main - Check description
 * Description: It prints the word _putchar, followed by a new line.
 * Return 0
 */

int _islower(int c)
{
	int ch;
	for(ch="a"; ch<="z"; ch++)
	{
		int d="c";
		if(islower(d))
		{
			return(1);
		}
		else
		{
			return(0);
		}
	}
	return(0);
}
