#include <stdio.h>

int ft_str_is_numeric(char *str);

int main()
{
	char *str;
	int x;

	str = "012323764-";
	x = ft_str_is_numeric(str);
	printf("%d", x);
}
