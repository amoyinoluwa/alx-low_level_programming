#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints minimum change
 * @argc: arg count
 * @argv: arg vector
 * Return: Success
 */

int main(int argc, char **argv)
{
	int i, change, remains, num;
	int coins[5] = {25, 10, 5, 2, 1};

	if ((argc - 1) != 1)
	{
		printf("%s\n", "Error");
		return (1);
	}
	num = atoi(argv[1]);
	remains = 0;
	if (num < 0)
	{
		printf("0\n");
		return (0);
	}
	for (i = 0; i < 5; i++)
	{
		if (num >= coins[i])
		{
			change = num / coins[i];
			num -= (change * coins[i]);
			remains += change;
			if (num == 0)
			{
				printf("%d\n", remains);
				return (0);
			}
		}
		else
			continue;
	}
	printf("%d\n", remains);
	return (0);
}
