#include <stdio.h>
#include <bsd/string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

int main()
{
	char string1[40] = "Ripu";
	char string2[] = "lointi";
	char string3[40] = "Ripu";
	char string4[] = "lointi";

	int retu;

	ft_strlcat(string1, string2, 10);
	retu = ft_strlcat(string1, string2, 10);
	printf("%s %d\n", string1, retu);

	strlcat(string3, string4, 10);
	retu = strlcat(string3, string4, 10);
	printf("%s %d\n", string3, retu);
	return 0;
}
