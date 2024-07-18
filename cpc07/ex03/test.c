#include <stdio.h>
#include <stdlib.h>

char	*ft_strjoin(int size, char **strs, char *sep);

int main(int argc, char *argv[])
{
	char *str1 = ft_strjoin(argc - 2, argv + 1, argv[argc -1]);
	if (str1)
	{
		printf("%s\n", str1);
		free(str1);
	}
	return (0);
}
