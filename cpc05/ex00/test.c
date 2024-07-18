#include <stdio.h>

int	ft_iterative_factorial(int nb);

int main()
{
	int i = -8;
	while (i < 34)
	{
		printf("%d! = %d\n", i, ft_iterative_factorial(i));
		i++;
	}
	return (0);
}
