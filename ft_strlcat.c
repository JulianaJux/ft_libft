/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julianaalencar <julianaalencar@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 16:59:19 by julianaalen       #+#    #+#             */
/*   Updated: 2021/08/15 17:38:02 by julianaalen      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	j;
	size_t	t;

	j = 0;
	t = 0;
	while (dst[j] && j < dstsize)
		j++;
	while ((src[t]) && ((j + t + 1) < dstsize))
	{
		dst[j + t] = src[t];
		t++;
	}
	if (j != dstsize)
		dst[j + t] = '\0';
	return (j + ft_strlen(src));
}
