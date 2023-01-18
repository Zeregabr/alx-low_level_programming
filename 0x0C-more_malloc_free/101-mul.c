#include "main.h"

/**
 * main - multiplies two positive numbers
 * @argc: n arg
 * @argv: array of arguments
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	unsigned long int a, b, res;
	
	int len_a, len_b;

	len_a = _strlen(argv[1]);
	len_b = _strlen(argv[2]);

	for (i = 0; i < )

		if (argc != 3)
		{
			printf("Error\n");
			return (98);
		}
	a = atoi(argv[1]);
	b = atoi(argv[2]);

	res = mul(a, b);
	printf("%d", res);
}
	
