#include <stdio.h>
#include "main.h"

/**
 * main - Check description
 * Description: it that checks for lowercase character.
 * Return: 0.
 */

int _islower(int c);
{
	char ch;
	for(ch="a"; ch<="z"; ch++)
	{
		char d="c";
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
