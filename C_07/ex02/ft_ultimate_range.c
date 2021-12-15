/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oerkoc <oerkoc@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 20:12:39 by oerkoc            #+#    #+#             */
/*   Updated: 2021/12/15 20:22:57 by oerkoc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*a;
	int	i;
	int	c;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	i = 0;
	c = min;
	a = (int *)malloc(sizeof(int) * (max - min));
	if (a == 0)
		return (NULL);
	while (c < max)
	{
		*(a + 1) = c;
		c++;
		i++;
	}
	*range = a;
	return (max - min);
}
