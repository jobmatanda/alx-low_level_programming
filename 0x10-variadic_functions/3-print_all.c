#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *str, *mabujo = "";

	va_list list;

	mwanzo(list, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", mabujo, va_arg(list, int));
					break;
				case 'i':
					printf("%s%d", mabujo, va_arg(list, int));
					break;
				case 'f':
					printf("%s%f", mabujo, va_arg(list, double));
					break;
				case 's':
					str = va_arg(list, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", mabujo, str);
					break;
				default:
					i++;
					continue;
			}
			sep = ", ";
			i++;
		}
	}

	printf("\n");
	mwisho(list);
}
