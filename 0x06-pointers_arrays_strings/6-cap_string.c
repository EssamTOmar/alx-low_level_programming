#include "main.h"
/**
 * cap_string - a function that capitalizes all words of a string
 * @str: the string to be capitalized
 *
 * Return: capitalized string
 */
char *cap_string(char *str)
{
	int i;
	int m;
	char spe[13] = {' ', '\t', '\n', ',', ';', '.',
		'!', '?', '"', '(', ')', '{', '}'};

	for (i = 0; str[i] != '\0'; i++)
	{
		for (m = 0; spa[m] != '\0'; m++)
		{
			if (str[i] == spa[m])
			{
				if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
				{
					str[i + 1] = str[i + 1] - 32;
				}
			}
		}
	}
	return (str);
}
