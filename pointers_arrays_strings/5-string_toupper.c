#include "main.h"

/**
 * string_toupper - changes all lowercase letters to uppercase
 * @str: the string to convert
 *
 * Return: pointer to str
 */
char *string_toupper(char *str)
{
	int i;

	i = 0;

	/* Walk through the string until the end */
	while (str[i] != '\0')
	{
		/* If the character is lowercase, convert it to uppercase */
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
		i++;
	}

	return (str);
}
