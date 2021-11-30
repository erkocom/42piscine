/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oerkoc <oerkoc@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 04:38:27 by oerkoc            #+#    #+#             */
/*   Updated: 2021/11/29 04:38:55 by oerkoc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	zerozero(int x)
{
	char	first;
	char	second;
	char	a;

	a = '0';
	first = a + (x / 10);
	second = a + (x % 10);
	write(1, &first, 1);
	write(1, &second, 1);
}

void	ft_print_comb2(void)
{
	int	x;
	int	y;

	x = 0;
	while (x < 99)
	{
		y = x + 1;
		while (y < 100)
		{
			zerozero(x);
			write(1, " ", 1);
			zerozero(y);
			if (!(x == 98 && y == 99))
				write(1, ", ", 2);
			y++;
		}
		x++;
	}
}
