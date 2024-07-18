#include <stdio.h>

int	ft_find_next_prime(int nb);

int	args_to_int(char *str)
{
	int	sum;
	int	sign;

	sum = 0;
	if (*str == '-')
	{
		sign = -1;
		str++;
	}
	else
		sign = 1;
	while (*str)
	{
		sum *= 10;
		sum += (*str) - '0';
		str++;
	}
	return (sign * sum);
}

int	main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Please give one argument. Please.\n");
		return (0);
	}
	int arg = args_to_int(argv[1]);
	printf("=== %d ===\n", arg);
	printf("The next prime is\n>>> %d\n", ft_find_next_prime(arg));
	return (0);
}
