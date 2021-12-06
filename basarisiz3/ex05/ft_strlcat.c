/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oerkoc <oerkoc@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 04:45:37 by oerkoc            #+#    #+#             */
/*   Updated: 2021/12/06 17:31:15 by oerkoc           ###   ########.fr       */
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

	x = 0;
	z = ft_len(dest);
	if (size != 0)
	{
		while (src[x] != '\0' && x + z < size - 1)
		{
			dest[z + x] = src[x];
			x++;
		}
	}
	dest[z + x] = '\0';
	return (ft_len(dest));
}
