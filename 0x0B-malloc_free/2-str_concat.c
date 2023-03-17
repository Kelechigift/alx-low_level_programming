#include <stdlib.h>
#include <string.h>

/**
 * *str_concat - write a function
 * @s1: parameter to be printed
 * @s2: parameter to be printed
 * Return: Always 0.
 */

char *str_concat(char *s1, char *s2)
{
	size_t len1 = strlen(s2);
	size_t len2 = strlen(s2);
	char *str_concat = malloc((len1 + len2 + 1) * sizeof(char));

		if (s1 == NULL)
		{
			s1 = "";
		}
		if (s2 == NULL)
		{
			s2 = "";
		}
		if (str_concat == NULL)
		{
			return (NULL);
		}
		memcpy(str_concat, s1, len1);
		memcpy(str_concat + len1, s2, len2 + 1);
		return (str_concat);
}
