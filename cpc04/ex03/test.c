#include <stdio.h>

int	ft_atoi(char *str);

int main()
{
	printf("%d\n", ft_atoi("2004"));
	printf("%d\n", ft_atoi("-300"));
	printf("%d\n", ft_atoi("--300"));
	printf("%d\n", ft_atoi("   -2147483648;laksdf23"));
	printf("%d\n", ft_atoi("    ---++---42xd33"));
	printf("%d\n", ft_atoi("\n\n\npieru32"));
	printf("%d\n", ft_atoi("\n\n\n\n--++--++--420"));

	return (0);
}
