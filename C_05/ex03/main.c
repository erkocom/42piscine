#include <stdio.h>

int	ft_recursive_power(int nb, int power);

int main()
{
	int x;
	int y;
	int z;

	x = 2;
	y = 5;
	z = ft_recursive_power(x, y);
	printf("%d", z);
}
