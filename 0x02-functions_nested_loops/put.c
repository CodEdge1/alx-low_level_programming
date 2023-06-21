#include <stdio.h>
#include "main.h"
#include <ctype.h>

/**
 * main - Check description
 * Description: It prints the word _putchar, followed by a new line.
 * Return 0
*/

void print_alphabet_x10(void)
{
        char alpha;
        int t;

        for(t = 1; t <= 10; t++)
        {
                for(alpha = 'a'; alpha <= 'z'; alpha++)
                {
                        _putchar(alpha);
                }
        }
        _putchar('\n');
}
