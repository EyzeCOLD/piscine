#include <stdio.h>
#include "ft_strupcase.c"

int main()
{
	char string[] = {'A', 'p', 'u', 'a', ' ', 'v', 'i', 't', 't', 'u', '!', '\0'};

	printf("%s\n", string);
	printf("%s\n", string);

	ft_strupcase(string);

	printf("%s\n", string);
	return 0;
}
