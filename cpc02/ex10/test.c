#include <stdio.h>
#include <string.h>
#include "ft_strlcpy.c"

int main()
{
	char string1[] = "Punainen tupa ja perunamaa";
	char string2[] = "Kastunut pahvilaatikko ja Tapsa";

	strlcpy(string2, string1, 10);

	printf("%s\n", string2);
	printf("%s\n", string1);
	printf("%d\n", strlcpy(string2, "Morotsimaru", 5));

	return 0;
}
