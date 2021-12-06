#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int main()
{
	char c1[] = "y";
	char c2[] = "x";
	int x;
	int y;
	int z;

	y = 0;
	x = ft_strncmp(c1, c2, y);
	z = strncmp(c1, c2, y);
	printf("%d, z = %d", x, z);
}
