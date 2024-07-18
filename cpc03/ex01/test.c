#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int main()
{
	char string1[] = "jukka";
	char string2[] = "pekka";
	char string3[] = "pekkanen";

	int array[8];
	array[0] = ft_strncmp(string1, string2, 3);
	array[1] = ft_strncmp(string2, string2, 3);
	array[2] = ft_strncmp(string2, string3, 3);
	array[3] = ft_strncmp(string2, string1, 3);
	array[4] = strncmp(string1, string2, 3);
	array[5] = strncmp(string2, string2, 3);
	array[6] = strncmp(string2, string3, 3);
	array[7] = strncmp(string2, string1, 3);

	for (int i = 0; i < 8; i++)
		printf("%d\n", array[i]);

	return 0;
}
