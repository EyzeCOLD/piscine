#include <stdio.h>
#include <string.h>

int ft_strcmp(char *s1, char *s2);

int main()
{
	char string1[] = "jukka";
	char string2[] = "pekka";
	char string3[] = "pekkanen";
//	char string4[] = "albumi 2";

	int array[8];
	array[0] = ft_strcmp(string1, string2);
	array[1] = ft_strcmp(string2, string2);
	array[2] = ft_strcmp(string2, string3);
	array[3] = ft_strcmp(string2, string1);
	array[4] = strcmp(string1, string2);
	array[5] = strcmp(string2, string2);
	array[6] = strcmp(string2, string3);
	array[7] = strcmp(string2, string1);

	for (int i = 0; i < 8; i++)
		printf("%d\n", array[i]);

	return 0;
}
