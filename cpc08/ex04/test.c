#include <stdio.h>
#include "ft_stock_str.h"

t_stock_str	*ft_strs_to_tab(int ac, char **av);

int main(int argc, char *argv[])
{
	t_stock_str *arr = ft_strs_to_tab(argc - 1, argv + 1);
	int i = 0;
	while (arr[i].str)
	{
		printf("%d. \"%s\" / size: %d\n", i, arr[i].str, arr[i].size);
		i++;
	}
	return 0;
}
