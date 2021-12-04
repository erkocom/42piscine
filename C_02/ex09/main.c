#include <stdio.h>

char	*ft_strcapitalize(char *str);

int main()
{
	char c[] ="-salut, comment tU vas ? 42mots qUARENTEte-deux; cinquante+et+un";
	
	ft_strcapitalize(c);
	printf("%s", c);
}

