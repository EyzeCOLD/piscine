#include <stdio.h>

int	ft_fibonacci(int index);

int main(int argc, char *argv[])
{
	int	i;

	if (argc != 2)
	{
		printf("Invalid number of arguments (expecting ONE (1))\n");
		return (0);
	}

	if (argv[1][0] == '-')
		i = argv[1][1] * -1 - '0';
	else
		i = argv[1][0] - '0';

	printf("%d\n", ft_fibonacci(i));

	return (0);
}
