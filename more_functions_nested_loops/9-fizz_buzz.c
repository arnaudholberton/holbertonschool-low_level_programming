#include <stdio.h>
/**
 *main - compare mutiple 3 5 10
 *
 *
 */
int main(void)
{
	int a = 0;
	for(a = 1; a <= 100; a++)
{
	if (a % 3 == 0)
	{
		printf("Fizz ");
	}
	else if (a % 5 == 0)
	{
		printf("Buzz ");
	}
	else if (a % 10 == 0)
	{
		printf("FizzBuzz ");
	}
	else
	{
		printf("%d ", a);
	}
	
}
return (0);
}
