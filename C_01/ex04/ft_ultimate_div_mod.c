void ft_ultimate_div_mod(int *a, int *b)
{
	int c;
	
	if (*b != 0)
	{
		c = *a;
		*a = *a / *b;
		*b = c / *b;
	}
}
