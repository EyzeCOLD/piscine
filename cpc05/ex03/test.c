#include <stdio.h>

int	ft_recursive_power(int nb, int power);

int main(int argc, char *argv[])
{
	int	number;
	int number_max;
	int power;

	if (argc != 3)
	{
		printf("Please give two parameters: number power (both single digit)\n");
		return (-1);
	}

	if ((*argv[2]) == '-')
		power = -1 * (argv[2][1] - '0');
	else
		power = *argv[2] - '0';

	if ((*argv[1]) == '-')
		number = -1 * (argv[1][1] - '0');
	else
		number = *argv[1] - '0';

	number_max = number + 40;
	while (number < number_max)
	{
		printf("%d^%d = %d\n", number, power, ft_recursive_power(number, power));
		number++;
	}
	return (0);
}
