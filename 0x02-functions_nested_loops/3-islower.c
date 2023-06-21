#include <stdio.h>
#include "main.h"
#include <ctype.h>

/**
 * main - Check description
 * Description: the function islower() checks for lowercase character.
 * Description: if the parameter c is lower case it returns 1 else returns 0.
 * Return: 0.
 */

int _islower(int c)
{
	if (islower(c))
	{
		return(1);
	}
	else
	{
		return(0);
	}
	return(0);	
}
