#include <stdio.h>
/**
 * main - A program which prints the size of computer it is compiled and run on
 * Return: 0
 */
int main(void)
{
	printf("size of a char: %lu byte(s)\n", sizeof(char));
	printf("size of an int: %lu byte(s)\n", sizeof(int));
	printf("size of a long int: %lu byte(s)\n", sizeof(long int));
	printf("size of long long int: %lu byte(s)\n", sizeof(long long int));
	printf("size of float: %lu byte(s)", sizeof(float));
	return (0);
}
