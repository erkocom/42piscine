void	ft_sort_int_tab(int *tab, int size)
{
	int i;
	int tpm;

	i = size - 1;

	while (i > 0)
	{
		if (*(tab + i) > *(tab + i - 1))
		{
			tmp = *(tab +i);
			tab + i = *(tab + i -1);
			(tab + i - 1) = tmp;
		}
	}
}
