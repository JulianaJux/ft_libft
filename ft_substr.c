/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julianaalencar <julianaalencar@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 09:15:39 by julianaalen       #+#    #+#             */
/*   Updated: 2021/08/18 09:31:12 by julianaalen      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	t;
	size_t	j;
	char	*str;

	str = (char*)malloc(sizeof(*s) * (len + 1));
	if (!str)
		return (NULL);
	t = 0;
	j = 0;
	while (s[t])
	{
		if (t >= start && j < len)
		{
			str[j] = s[t]
			j++;
		}
		t++;
	}
	str[j] = 0;
	return (str);
}
