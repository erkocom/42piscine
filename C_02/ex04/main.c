#include <stdio.h>

int ft_str_is_lowercase(char *str);

int main()
{
	char str[] = "asjdjahsd";
	int x;

	x = ft_str_is_lowercase(str);
	printf("%d", x);
}
