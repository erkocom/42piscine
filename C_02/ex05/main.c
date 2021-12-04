#include <stdio.h>

int ft_str_is_uppercase(char *str);

int main()
{
	char str[] = "ASGHDJHAGSDa";
	int i;

	i = ft_str_is_uppercase(str);
	printf("%d", i);
}
