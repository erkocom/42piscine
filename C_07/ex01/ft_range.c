/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oerkoc <oerkoc@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 15:43:59 by oerkoc            #+#    #+#             */
/*   Updated: 2021/12/15 20:23:26 by oerkoc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*x;

	i = 0;
	if (min >= max)
		return (NULL);
	x = (int *)malloc(sizeof(int) * (max - min));
	while (min < max)
	{
		tab[i] = min;
		i++;
		min++;
	}
	return (x);
}

int main()
{
	int *p = ft_range(3, 9);
	int i = 0;
	while (i < 6)
	{
		printf("%d", *(p+i));
		i++;
	}
}
