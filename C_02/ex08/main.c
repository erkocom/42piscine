#include <stdio.h>

char *ft_strlowcase(char *str);

int main()
{
	char c[] = "He-*0LLo23123OOoooOOO";
	
	ft_strlowcase(c);
	printf("%s", c);
}
