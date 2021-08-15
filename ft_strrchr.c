/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julianaalencar <julianaalencar@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 18:01:39 by julianaalen       #+#    #+#             */
/*   Updated: 2021/08/15 19:25:56 by julianaalen      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int			j;
	const char	*t;

	t = s;
	j = ft_strlen(s);
	s = (s + j);
	while (*s != *t && c != *s)
		s--;
	if (c == *s)
		return ((char *)s);
	return (0);
}
