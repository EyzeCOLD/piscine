#include <stdio.h>
#include "ft_strncat.c"
#include <string.h>

int main()
{
	char string1[] = "Paska";
	char string2[] = " on";
	char string3[] = " ruskeaa";
	char string4[] = ", jep.";
	char string5[23];

	for (int i = 0; i < 23; i++)
		string5[i] = '\0';

	printf("%s\n", string1);
	printf("%s\n", string2);
	printf("%s\n", string3);
	printf("%s\n", string4);
	printf("%s\n", ft_strncat(string5, string1, 30));
	printf("%s\n", ft_strncat(string5, string2, 2));
	printf("%s\n", ft_strncat(string5, string3, 3));
	printf("%s\n", ft_strncat(string5, string4, 1));

	return 0;
}
