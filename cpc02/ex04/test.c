#include "ft_str_is_lowercase.c"
#include <unistd.h>

int main()
{
		char *string1 = "anna mulle";
		char *string2 = "tahti taiVas";
		char *string3 = "Anna valo pimeaan";
		char *string4 = "anna edes vaH";
		char *string5 = "valoo";

		if (ft_str_is_lowercase(string1))
				write(1, "On\n", 3);
		else
				write(1, "Ei\n", 3);
		if (ft_str_is_lowercase(string2))
				write(1, "On\n", 3);
		else
				write(1, "Ei\n", 3);
		if (ft_str_is_lowercase(string3))
				write(1, "On\n", 3);
		else
				write(1, "Ei\n", 3);
		if (ft_str_is_lowercase(string4))
				write(1, "On\n", 3);
		else
				write(1, "Ei\n", 3);
		if (ft_str_is_lowercase(string5))
				write(1, "On\n", 3);
		else
				write(1, "Ei\n", 3);
		return 0;
}
