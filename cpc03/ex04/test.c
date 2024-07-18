#include <string.h>
#include <stdio.h>

char	*ft_strstr(char *str, char *to_find);

int main()
{
	char string1[] = "Heinasuovassa neula piilossa on.";
	char string2[] = "";
	char string3[] = "piil";
	char string4[] = "neulat";

	printf("%s\n", strstr(string1, string2));
	if (strstr(string1, string3))
		printf("%s\n", strstr(string1, string3));
	if (strstr(string1, string4))
		printf("%s\n", strstr(string1, string4));

	printf("%s\n", ft_strstr(string1, string2));
	if (ft_strstr(string1, string3))
		printf("%s\n", ft_strstr(string1, string3));
	if (ft_strstr(string1, string4))
		printf("%s\n", ft_strstr(string1, string4));
	return (0);
}
