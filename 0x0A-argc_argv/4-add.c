#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * check_num - check - checks if strings there are digits
 * @str: array string
 * Return: 0 (Success)
 */
int check_num(char *str)
{
	/*Declaring variables*/
	unsigned int count;

	count = 0;
	while (count < strlen(str[count]))
		/*count string*/
	{
		if (!isdigit(str[count]))
			/*check if str the are digit*/
		{
			return (0);
		}
		count++;
	}
	return (1);
}

/**
 * main - A program that prints name of a program
 * @argc: counts arguments
 * @argv: arguments
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	/*Declaring variables*/
	int count;
	int str_to_int;
	int sum = 0;

	count = 1;
	while (count < argc)
		/*Goes through the whole array*/
	{
	if (check_num(argv[count]))
	{
	str_to_int = atoi(argv[count]);
	/*ATOI --> convert string to int*/
	sum += str_to_int;
	}
/*condition if one of the numbers contains symbols that are not digits*/
		else
		{
		printf("Error\n");
		return (1);
		}
		count++;
	}
	printf("%d\n", sum); /*print sum*/
	return (0);
}
