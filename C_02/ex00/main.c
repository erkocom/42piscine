#include <stdio.h>

char	*ft_strcpy(char *dest, char *src);

int main()
{
	char str1[] = "Hello";
	char str2[] = "";
	char *str3;

	str3  = ft_strcpy(str2, str1);
	printf("%s", str3);
}
