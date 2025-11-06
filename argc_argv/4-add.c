#include <stdio.h>
#include <stdlib.h>
/**
 * main - adds two numbers passed as arguments
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char **argv)
{
	int i, ii, somme = 0;
	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		for (ii = 0; argv[i][ii] != '\0'; ii++)
		if (argv[i][ii] < '0' || argv[i][ii] > '9')
		{
			printf("Error\n");
			return (1);
		}
		somme += atoi(argv[i]);
	}
	printf("%d\n", somme);
	return (0);
}
