#include "main.h"
/**
 *print_alphabet - printing alphabets
 *description - printing lowercase alphabets
 *Return: always 0 (success)
 */
void print_alphabet(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
