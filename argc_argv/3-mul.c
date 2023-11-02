#include <stdlib.h>
#include <stdio.h>
/**
 * main - program to find product of two numbers
 * @argc: - number of arguments
 * @argv: - pointer containing passed arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
if (argc > 3)
printf("Error\n");
else
{
int i, total = 1;
for (i = 1; i < argc; i++)
total *= atoi(argv[i]);
printf("%d\n", total);
}
return (0);
}
