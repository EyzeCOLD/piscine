#include "ft_stock_str.h"

t_stock_str	*ft_strs_to_tab(int ac, char **av);

void	ft_show_tab(t_stock_str *par);

int main(int argc, char *argv[])
{
	t_stock_str *arr = ft_strs_to_tab(argc - 1, argv + 1);
	ft_show_tab(arr);
	return 0;
}
