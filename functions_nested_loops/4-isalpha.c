#include "main.h"

/**
 * _isalpha - checks for alphabetic charcter.
 * @c: the character to be checked.
 *
 * Return: 1 if c is a letter, lowercase or uppercase, otherwise return 0.
 */
int _isalpha(int c)
{
	/* check if c is a lowercase letter */
	if (c >= 'a')
		if (c <= 'z')
			/* if c is a lowercase letter, return 1 */
			return (1);
	/* check if c is an uppercase letter */
	if (c >= 'A')
		if (c <= 'Z')
			/* if c is an uppercase letter, return 1 */
			return (1);
	return (0);
}
