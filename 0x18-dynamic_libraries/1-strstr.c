#include "main.h"
#include <stddef.h>
/**
 * _strstr - locates a substring.
 * @haystack: input string.
 * @needle: substring to be matched.
 * Return: pointer to object.
 */
char *_strstr(char *haystack, char *needle)
{
	char *p_i;
	char *p_ss = needle;

	for (; *haystack != '\0'; haystack++)
	{
		for (p_i = haystack, p_ss = needle; *p_ss == *p_i && *p_ss; p_ss++, p_i++)
			;
		if (*p_ss == '\0')
			return (haystack);
	}
	return (NULL);
}
