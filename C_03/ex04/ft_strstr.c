/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oerkoc <oerkoc@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 04:00:56 by oerkoc            #+#    #+#             */
/*   Updated: 2021/12/06 04:00:59 by oerkoc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	t;
	int	s;

	t = 0;
	s = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[s] != 0)
	{
		t = 0;
		while (str[s + t] == to_find[t] && str[s + t] != '\0')
			t++;
		if (to_find[t] == '\0')
			return (str + s);
		s++;
	}
	return (0);
}
