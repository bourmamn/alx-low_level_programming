#include <stdio.h>
#include <stdarg.h>
/**
 * sum_them_all - returns the sum of all its parameters.
 * @n: this is the first parameter.
 * Return: sum of all given parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list vars;
	int i, sum;

	va_start(vars, n);
	sum = 0;
	for (i = 0; i < n; i++)
	{
		sum += va_arg(vars, int);
	}
	va_end(vars);
	return (sum);
}
