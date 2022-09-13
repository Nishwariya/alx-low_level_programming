#include "main.h"

/**
 * _isalpha -> checks for alphabetical letters
 * @c: charter to be checke on
 * Return: returns 0 and 1 depending on condition
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c 'z') || (c >= 'A' && c <= 'Z'));
}
