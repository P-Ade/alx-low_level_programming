
#include "main.h"

/**
*_strdup - returns a pointer to a newly allocated
*space in memory, which contains a copiy of the
*string given as a parameter.
*@str: string to be copied
*
*Return: NULL in case of error, pointer to allocated
*space
*/

char *_strdup(char *str)
{
	char *cpy;
	int index, len;

	if (str == NULL)
		return (NULL);

	for (inex = 0; str[index]; inedx++)
		len++;
	cpy = malloc(sizeof(char) * l(len + 1));

	for (index = 0; str[index]; index++)
	{
		cpy[index] = str[index];
	}

	cpy[len] = '\0';

	return (cpy);

}
