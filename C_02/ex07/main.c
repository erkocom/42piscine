#include <stdio.h>

char	*ft_strupcase(char *str);

int main()
{
	char str[] = "He--*1llO";

	ft_strupcase(str);
	printf("%s", str);
}
