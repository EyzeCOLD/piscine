#include <stdio.h>
#include "ft_strcapitalize.c"

int main()
{
	char string[] = "Tekstihan se siella, nooh 32hommaa eika mikaan!! oo y!ks niista ge=ha+dd";
	printf("%s\n", string);
	ft_strcapitalize(string);
	printf("%s\n", string);
	return 0;
}
