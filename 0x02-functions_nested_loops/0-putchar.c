#include <unistd.h>
#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char MyName[9] = "_putchar";
	int i;

	for (i = 0; i < 9; i++)
		_putchar(MyName[i]);
	_putchar('\n');

	return (0);
}
