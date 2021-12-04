#include <stdio.h>

int	ft_str_is_printable(char *str);

int main()
{
	char *c;
	int x;
	
	c = 68;
	
	x = ft_str_is_printable(c);
	printf("%d", x);
}
