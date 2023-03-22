#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char *jb = "_putchar";

	while (*jb)
	{
		_putchar(*jb);
		jb++;
	}
	_putchar('\n');

	return (0);
}
