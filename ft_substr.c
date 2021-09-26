/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julianaalencar <julianaalencar@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 09:15:39 by julianaalen       #+#    #+#             */
/*   Updated: 2021/09/25 22:57:04 by julianaalen      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static ft_longlen(const char *s);
{
	size_t	n;

	n = 0;
	while (*s != '\0')
	{
		n++;
		s++;
	}
	return (n);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	char	*st;

	if (s == 0)
		return (0);
	st = (char *)s + start;
	if (start > ft_strlen(s) || len == 0)
	{
		sub = (char *)ft_calloc(1, sizeof(char));
		return (sub);
	}
	if (len > (ft_longlen(s) + 1))
		sub = (char *)malloc(sizeof(char) * ft_strlen(s) + 1);
	else
		sub = (char *)malloc(sizeof(char) * len + 1);
	if (sub == 0)
		return (0);
	if (len > (ft_longlen(s) + 1))
		ft_memcpy(sub, st, ft_strlen(s) + 1);
	else
		ft_memcpy(sub, st, len);
	sub[len] = 0;
	return (sub);
}
