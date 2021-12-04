#include <stdio.h>

int	ft_str_is_alpha(char *str);

int main()
{
	//char str[] = "";
	char *str;
	int x;

	str = "Hello";

	x = ft_str_is_alpha(str);
	printf("%d", x);}
