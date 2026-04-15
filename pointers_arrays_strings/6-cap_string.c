#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @str: the string to capitalize
 *
 * Return: pointer to str
 */
char *cap_string(char *str)
{
	int i;
	int flag;

	i = 0;
	flag = 1;

	/* Walk through the string until the end */
	while (str[i] != '\0')
	{
		/* Check if current character is a separator */
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
		    str[i] == ',' || str[i] == ';' || str[i] == '.' ||
		    str[i] == '!' || str[i] == '?' || str[i] == '"' ||
		    str[i] == '(' || str[i] == ')' || str[i] == '{' ||
		    str[i] == '}')
			flag = 1;

		/* If flag is set and character is lowercase, capitalize it */
		else if (flag == 1 && str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
			flag = 0;
		}
		else
			flag = 0;

		i++;
	}

	return (str);
}
