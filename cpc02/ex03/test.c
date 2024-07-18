#include "ft_str_is_numeric.c"
#include <unistd.h>

int main()
{
		char *string1 = "103123";
		char *string2 = "03h3";
		char *string3 = " 123123";
		char *string4 = "193123!";
		char *string5 = "103129\n";

		if (ft_str_is_numeric(string1))
				write(1, "On\n", 3);
		else
				write(1, "Ei\n", 3);
		if (ft_str_is_numeric(string2))
				write(1, "On\n", 3);
		else
				write(1, "Ei\n", 3);
		if (ft_str_is_numeric(string3))
				write(1, "On\n", 3);
		else
				write(1, "Ei\n", 3);
		if (ft_str_is_numeric(string4))
				write(1, "On\n", 3);
		else
				write(1, "Ei\n", 3);
		if (ft_str_is_numeric(string5))
				write(1, "On\n", 3);
		else
				write(1, "Ei\n", 3);
		return 0;
}
