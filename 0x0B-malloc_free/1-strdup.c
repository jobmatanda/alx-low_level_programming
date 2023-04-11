#include <stdlib.h>
#include "main.h"

/**
 * *_strdup - copies the string given as parameter
 * @str: string to duplicate
 *
 * Return: pointer to the copied string (Success), NULL (Error)
 */
char *_strdup(char *str)
{
	char *mabujo;
	unsigned int i, lenght;

	i = 0;
	lenght = 0;

	if (str == NULL)
		return (NULL);

	while (str[lenght])
		lenght++;

	mabujo = malloc(sizeof(char) * (lenght + 1));

	if (mabujo == NULL)
		return (NULL);

	while ((mabujo[i] = str[i]) != '\0')
		i++;

	return (mabujo);
}
