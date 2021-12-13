/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oerkoc <oerkoc@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 13:16:30 by oerkoc            #+#    #+#             */
/*   Updated: 2021/12/07 13:49:17 by oerkoc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_len(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	x;
	unsigned int	z;
	unsigned int	m;

	x = 0;
	z = ft_len(dest);
	m = ft_len(src);
	if (size <= z)
		return (size + m);
	if (size != 0)
	{
		while (src[x] != '\0' && x + z < size - 1)
		{
			dest[z + x] = src[x];
			x++;
		}
	}
	dest[z + x] = '\0';
	return (z + m);
}
