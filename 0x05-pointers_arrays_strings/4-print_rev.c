#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_rev - prints given string in reverse
 * @s: passed pointer argument for string
 * Return: void
 */
  
void print_rev(char *s)
{
	int len = strlen(s);

	while (len--)
        _putchar(*(s + len));
    _putchar(10);
}

