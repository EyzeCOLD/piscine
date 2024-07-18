#include <unistd.h>
#include <string.h>
#include "ft_strncpy.c"

int main()
{
		char string1[20];
		char source[] = "Moro";

		ft_strncpy(string1, source, 4);

		for (int i = 0; i < 20; i++)
		{
			write(1, &string1[i], 1);
		}
		return 0;
}
