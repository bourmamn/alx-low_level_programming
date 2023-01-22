#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - prints numbers, followed by a new line.
 * @separator: this s the string to be printed between numbers.
 * @n: this is the number of integers passed to the function.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list vars;
	unsigned int i;

	va_start(vars, separator);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(vars, int));
		if (i < (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	va_end(vars);
}
