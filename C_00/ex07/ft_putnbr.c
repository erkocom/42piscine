/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oerkoc <oerkoc@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 09:50:33 by oerkoc            #+#    #+#             */
/*   Updated: 2021/11/29 09:50:36 by oerkoc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

long	length(long x)
{
	int	i;

	i = 0;
	while (x > 10)
	{
		x = x / 10;
		i++;
	}
	return (i);
}

long	expo(int x)
{
	long	ex;

	ex = 1;
	while (x > 0)
	{
		ex = ex * 10;
		x--;
	}
	return (ex);
}

void	ft_putnbr(int nb)
{
	long	l;
	long	m;
	long	e;
	long	n;

	n = nb;
	if (n < 0)
	{
		ft_putchar('-');
		l = -n;
	}
	else
		l = n;
	m = length(l);
	e = expo(m);
	while (m > 0)
	{
		ft_putchar('0' + l / e);
		l = l - (l / e) * e;
		e = e / 10;
		m--;
	}
	ft_putchar('0' + l % 10);
}
