#include <stdio.h>

int ft_recursive_factorial(int nb);

int main()
{
	int i = -5;

	while (i < 20)
	{
		printf("%d! = %d\n", i, ft_recursive_factorial(i));
		i++;
	}
	return (0);
}
