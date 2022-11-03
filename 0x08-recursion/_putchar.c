#include <unistd.h>

/**
 * _putcher - writes the character  c to stdout
 * @c: the character to print
 *
 * Return: on success 1
 * On error, -i is returned
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
