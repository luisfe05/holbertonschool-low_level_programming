#include "main.h"

/**
 * leet - encodes a string into 1337
 * @str: the string to encode
 *
 * Return: pointer to str
 */
char *leet(char *str)
{
	int i;
	int j;
	char letters[] = "aAeEoOtTlL";
	char replace[] = "4433007711";

	i = 0;

	/* Walk through each character of the string */
	while (str[i] != '\0')
	{
		j = 0;

		/* Check if the character matches any letter to replace */
		while (letters[j] != '\0')
		{
			if (str[i] == letters[j])
				str[i] = replace[j];
			j++;
		}
		i++;
	}

	return (str);
}
