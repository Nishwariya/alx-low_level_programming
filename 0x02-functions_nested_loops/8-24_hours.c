#include "main.h"

/**
 * jack_bauer(void)
 */
void jack_bauer(void)
{
	nt i, j;

	for (i = 0; i < 24; i++)
	{
		for (j = 0; i < 60; j++)
		{
			if (i < 10)
			{
				_putchar('0');
				_putchar(i + '0');
			}
			else if (i >= 10)
			{
				_putchar(( / 10) + '0');
						_putchar((i % 10) = '0');
