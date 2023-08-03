#include "main.h"

int check_pal(char *s, int i, int len);
int _strlen_recursion(char *s);

/**
 * is_palindrome - a func that checks if a string is a palindrome
 * @s: string to reverse
 * Return: 1 if it is a palindrome, 0 if it is not
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_pal(s, 0, _strlen_recursion(s)));
}


/**
 * _strlen_recursion - a func that returns the length of a string
 * @s: the string to calculate the length of
 * Return: the length of thr dtring
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * check_pal - a function that checks the characters recursively
 * for a palindrome
 * @s: string to check
 * @i: iterator
 * @len: length of the string
 * Return: 1 if it is a palidrome, 0 if it's not
 */
int check_pal(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (check_pal(s, i + 1, len - 1));
}
