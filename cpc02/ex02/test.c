#include "ft_str_is_alpha.c"
#include <unistd.h>

int main()
{
		char *string1 = "abcdEFGH";
		char *string2 = "abc2dEFGH";
		char *string3 = "abcd EFGH";
		char *string4 = "abcdEFGH!";
		char *string5 = "abcdEFGH\n";

		if (ft_str_is_alpha(string1))
				write(1, "On\n", 3);
		else
				write(1, "Ei\n", 3);
		if (ft_str_is_alpha(string2))
				write(1, "On\n", 3);
		else
				write(1, "Ei\n", 3);
		if (ft_str_is_alpha(string3))
				write(1, "On\n", 3);
		else
				write(1, "Ei\n", 3);
		if (ft_str_is_alpha(string4))
				write(1, "On\n", 3);
		else
				write(1, "Ei\n", 3);
		if (ft_str_is_alpha(string5))
				write(1, "On\n", 3);
		else
				write(1, "Ei\n", 3);
		return 0;
}
