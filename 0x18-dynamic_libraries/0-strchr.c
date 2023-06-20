#include "main.h"
#include <stddef.h>
/**
 * _strchr - locates a character in a string.
 * @s: input string.
 * @c: character to be found.
 * Return: pointer to object.
 */
char *_strchr(char *s, char c)
{
	unsigned int i;

	for (; ; i++)
	{
		if (s[i] == c)
			return (s + i);
		if (!s[i])
			return (NULL);
	}
	return (NULL);
}
