#include "ft_str_is_uppercase.c"
#include <unistd.h>

int main()
{
		char *string1 = "ANNA";
		char *string2 = "tahti taiVas";
		char *string3 = "Annavalopimeaan";
		char *string4 = "AAAAAAhh";
		char *string5 = "valoo";

		if (ft_str_is_uppercase(string1))
				write(1, "On\n", 3);
		else
				write(1, "Ei\n", 3);
		if (ft_str_is_uppercase(string2))
				write(1, "On\n", 3);
		else
				write(1, "Ei\n", 3);
		if (ft_str_is_uppercase(string3))
				write(1, "On\n", 3);
		else
				write(1, "Ei\n", 3);
		if (ft_str_is_uppercase(string4))
				write(1, "On\n", 3);
		else
				write(1, "Ei\n", 3);
		if (ft_str_is_uppercase(string5))
				write(1, "On\n", 3);
		else
				write(1, "Ei\n", 3);
		return 0;
}
