#include "main.h"
/**
 * _strlen_recursion - size
 * @s: pointer tp string params
 * Return: recursion
 */

int _strlen_recursion(char *s)
{
	if (!*s)
	{
		return (0);
	}
	return (1 + _strlen_recursion(++s));
}
/**
 * p1 - palindrome
 * @s: pointer to string
 * @l: position
 * Return: boolena
 */
int p1(char *s, int l)
{
	if (l < 1)
	{
		return (1);
	}

	if (*s == *(s + l))
	{
		return (pl(s + 1, l - 2));
}
/**
 * is_palindrome- palindrome
 * @s: pointer to string
 * Return: recursion
 */

int is_palindrome(char *s)

{
	int len = _strlen_recursion(s);

	return (p1(s, len - 1));
}
