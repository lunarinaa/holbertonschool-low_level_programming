#include <stdio.h>
#include <stdlib.h>
/**
 * main - a programm to write a change to return
 * @argc: argument count
 * @argv: argument passed to the programm
 * Return: 0 or 1
 */
int main(int argc, char *argv[])
{
int cents, coins = 0;
if (argc != 2)
{
printf("Error\n");
return (1);
}
cents = atoi(argv[1]);
while (cents > 0)
{
coins++;
if ((cents - 25) >= 0)
{
cents = cents - 25;
continue;
}
if ((cents - 10) >= 0)
{
cents = cents - 10;
continue;
}
if ((cents - 2) >= 0)
{
cents = cents - 2;
continue;
}
cents--;
}
printf("%d\n", coins);
return (0);
}
