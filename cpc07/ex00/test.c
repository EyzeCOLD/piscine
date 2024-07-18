#include <stdio.h>
#include <string.h>

char	*ft_strdup(char *src);

int	main(void)
{
	char	*str1 = "apuaaaa auttakaa";
	char	*str2;
	str2 = ft_strdup(str1);
	char	*str3;
	str3 = strdup(str1);
	printf("ft: %s\nog: %s\n", str2, str3);
	return (0);
}
