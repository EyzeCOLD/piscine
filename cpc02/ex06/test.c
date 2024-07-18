#include "ft_str_is_printable.c"
#include <unistd.h>

int main()
{
		char *string1 = "ANNA";
		char *string2 = "tahti taiVas";
		char *string3 = "Ann\navalopimeaan";
		char *string4 = "AAAAA\tAhh";
		char *string5 = "valoo";

		if (ft_str_is_printable(string1))
				write(1, "On\n", 3);
		else
				write(1, "Ei\n", 3);
		if (ft_str_is_printable(string2))
				write(1, "On\n", 3);
		else
				write(1, "Ei\n", 3);
		if (ft_str_is_printable(string3))
				write(1, "On\n", 3);
		else
				write(1, "Ei\n", 3);
		if (ft_str_is_printable(string4))
				write(1, "On\n", 3);
		else
				write(1, "Ei\n", 3);
		if (ft_str_is_printable(string5))
				write(1, "On\n", 3);
		else
				write(1, "Ei\n", 3);
		return 0;
}
