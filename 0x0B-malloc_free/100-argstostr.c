#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/*
 * len - returns length of a str
 * @str: string counted
 * Return: returns the length
 */
int len(char *str)
{
	int len = 0
	if(str != NULL)
	{
		while(str[len])
				len++;
	}
	return (len);
}		

/**
 * *argstostr - convert arguments on command line to strings
 * @ac: int type
 * @av: pointer to array
 * Return: arguments as strings
 */

char *argstostr(int ac, char **av)
{
	int size, count, count1, count2 = 0;
	char *ptr;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (count = 0; count < ac; count++)
	{
		for (count1 = 0; av[count][count1] != '\0'; count1++)
		{
			size += 1;
		}
		size += 1;
	}
	size += 1;

	ptr = malloc(sizeof(char) * size);
	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	for (count = 0; count < ac; count++)
	{
		for (count1 = 0; av[count][count1] != '\0'; count1++)
		{
			ptr[count2] = av[count][count1];
			count2++;
		}
		ptr[count2] = '\n';
		count2++;
	}
	ptr[count2] = '\0';
	return (ptr);
}
