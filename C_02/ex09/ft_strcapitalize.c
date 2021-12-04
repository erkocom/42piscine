/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oerkoc <oerkoc@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 17:26:14 by oerkoc            #+#    #+#             */
/*   Updated: 2021/12/04 17:30:36 by oerkoc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	x;

	i = 1;
	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] = str[0] - 32;
	while (str[0] != '\0' && str[i] != '\0')
	{
		x = i - 1;
		if (!((str[x] >= '0' && str[x] <= '9') || (str[x] >= 'A'
					&& str[x] <= 'Z') || (str[x] >= 'a' && str[x] <= 'z')))
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] = str[i] - 32;
		}
		if (((str[x] >= '0' && str[x] <= '9') || (str[x] >= 'A'
					&& str[x] <= 'Z') || (str[x] >= 'a' && str[x] <= 'z')))
		{
			if (str[i] >= 'A' && str[i] <= 'Z')
				str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}
