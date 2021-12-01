#include <stdio.h>

void ft_rev_int_tab(int *tab, int size)
{
	int new_tab[size];
	int i;
	int a;
	int b;

	i = 0;
	a = 0;
	b = size;

	while (i <= size)
	{
		new_tab[b-1] = *(tab + i);
		i++;
		b--;
	}
	while (a < size)
	{
		printf("%d, ", new_tab[a]);
		a++;
	}
}

int main()
{
	int size = 5;
	int tab[5] = {1, 2, 3, 4, 5};
	ft_rev_int_tab(tab, size);
}
