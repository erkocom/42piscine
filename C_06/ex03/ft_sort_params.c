/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oerkoc <oerkoc@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 16:43:38 by oerkoc            #+#    #+#             */
/*   Updated: 2021/12/15 14:21:39 by oerkoc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_puthcar(char *c)
{
	int	i;

	i = 0;
	while (c[i] != '\0')
	{
		write(1, &c[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

void	ft_swap(char **param1, char **param2)
{
	char	*c;

	c = *param1;
	*param1 = *param2;
	*param2 = c;
}

int	str_cmp(char *str1, char *str2)
{
	int	x;

	x = 0;
	while (str1[x] != '\0' || str2[x] != '\0')
	{
		if (str2[x] < str1[x])
			return (1);
		if (str2[x] > str1[x])
			return (0);
		x++;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	int	x;
	int	y;
	int	i;

	x = 1;
	i = 1;
	while (x + 1 < argc)
	{
		y = x + 1;
		while (y < argc)
		{
			if (str_cmp(argv[x], argv[y]) == 1)
				ft_swap(&argv[x], &argv[y]);
			y++;
		}
		x++;
	}
	while (i < argc)
	{
		ft_puthcar(argv[i]);
		i++;
	}
}
