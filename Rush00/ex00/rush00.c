/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oerkoc <oerkoc@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 22:16:08 by oerkoc            #+#    #+#             */
/*   Updated: 2021/11/28 22:19:31 by oerkoc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	first_and_last(int q)
{
	int	dash_num;

	dash_num = q - 2;
	ft_putchar('o');
	while (dash_num > 0)
	{
		ft_putchar('-');
		dash_num--;
	}
	if (q > 1)
	{
		ft_putchar('o');
	}
	ft_putchar('\n');
}

void	between_line(int p)
{
	int	gap_num;

	gap_num = p - 2;
	ft_putchar('|');
	while (gap_num > 0)
	{
		ft_putchar(' ');
		gap_num--;
	}
	if (p > 1)
	{
		ft_putchar('|');
	}
	ft_putchar('\n');
}

void	rush03(int x, int y)
{
	int	between_line_num;

	between_line_num = y - 2;
	if (x > 0 && y > 0)
	{
		first_and_last(x);
		while (between_line_num > 0)
		{
			between_line(x);
			between_line_num--;
		}
		if (y > 1)
		{
			first_and_last(x);
		}
	}
}
