#include <stdio.h>
#include "ft_strlowcase.c"

int main()
{
	char string[] = {'A', 'p', 'u', 'A', ' ', 'v', 'I', 't', 't', 'u', '!', '\0'};

	printf("%s\n", string);

	ft_strlowcase(string);

	printf("%s\n", string);
	return 0;
}
