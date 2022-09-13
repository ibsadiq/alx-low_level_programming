#include "main.h"

/**
 * main - prints the word _putchar
 *
 * Return: 0 on success execution.
 */

int main(void)
{
	char s[] = "_putchar";
	int i = 0;

	while (s[i] != '\0')
	{
		putchar(s[i]);
		i++;
	}
	putchar(10);

	return (0);
}