#include <stdio.h>

int	ft_is_prime(int nb);

int main()
{
	int i = -1;
	while (i < 10)
	{
		if (ft_is_prime(i))
		{
			printf("%d\n", i);
		}
		i++;
	}
	return (0);
}
