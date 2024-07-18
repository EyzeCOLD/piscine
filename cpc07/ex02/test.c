#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max);

int main()
{
	int	size;
	int	*array;
	int	i;

	size = ft_ultimate_range(&array, 5, -3);
	i = 0;
	if (array == NULL)
	{
		printf("Array is null!! :(\n");
		return (0);
	}
	printf("size: %d\n", size); 
	while (i < size)
	{
		printf("%d", array[i]);
		if (i + 1 < size)
			printf(", ");
		i++;
	}
	free(array);
	return (0);
}
