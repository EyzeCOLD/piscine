#include <stdio.h>
#include "ft_strcpy.c"

int main()
{
	char dest[] = "Borjensty";
	char *string;

	printf("%s\n", dest);

	string = ft_strcpy(dest, "Morjensta");

	printf("%s\n", dest);
	printf("%s\n", string);

	return 0;
}
