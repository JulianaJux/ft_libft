/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julianaalencar <julianaalencar@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 09:37:20 by julianaalen       #+#    #+#             */
/*   Updated: 2021/09/06 12:06:34 by julianaalen      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	t;
	size_t	j;
	char	*str;

	str = (char *)malloc(sizeof(*s1) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!str)
		return (NULL);
	t = 0;
	j = 0;
	while (s1[t])
	{
		str[j++] = s1[t];
		t++;
	}
	while (s2[t])
	{
		str[j++] = s2[t];
		t++;
	}
	str[j] = '\0';
	return (str);
}
