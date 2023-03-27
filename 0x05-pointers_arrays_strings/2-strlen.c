#include "main.h"

/**
 * _strlen - returns the length of a string
 * @job: string to evaluate
 *
 * Return: the length of the string
 */
int _strlen(char *job)
{
	int i;

	i = 0;

	while (job[i] != '\0')
	{
		i++;
	}

	return (i);
}
