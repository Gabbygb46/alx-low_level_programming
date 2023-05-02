#include "main.h"
/**
 * puts2 - print only one character out of the two
 * @str: input
 * Return: print
 */
void puts2(char *str)
{
	int t = 0;
	int o;

	for (o = 0 ; o <= t ; o++)
	{
		if ((o % 2) == 0)
			_putchar(str[o]);
		else
			continue;
	}
	_putchar('\n');
}
