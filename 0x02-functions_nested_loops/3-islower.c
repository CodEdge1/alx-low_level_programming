#include <stdio.h>
#include "main.h"
#include <ctype.h>

/**
 * main - Check description
 * Description: it that checks for lowercase character.
 * Return: 0.
 */

int _islower(int c)
{
	if(islower(c))
	{
		return(1);
	}
	else
	{
		return(0);
	}
	return(0);	
}
