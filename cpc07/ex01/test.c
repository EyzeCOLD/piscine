#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max);

int main()
{
	int				*arr;
	long long int 	arr_sz;
	int				min = -100;
	int				max = 100;
	unsigned int	i;

	arr = ft_range(min, max);
	if (!arr)
	{
		printf("array is null\n");
		return (-1);
	}
	arr_sz = max - min;
	i = 0;
	while (i < arr_sz)
	{
		printf("%d", arr[i]);
		if (i + 1 < arr_sz)
			printf(", ");
		i++;
	}
	free(arr);
	printf("\n");
	return (0);
}
