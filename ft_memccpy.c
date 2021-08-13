/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julianaalencar <julianaalencar@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/18 20:22:14 by julianaalen       #+#    #+#             */
/*   Updated: 2021/08/13 11:17:30 by julianaalen      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	char	*j;
	char	*d;
	char	*s;

	j = 0;
	d = (char*) dst;
	s = (char*) src;
	while (j < n)
	{
		d[j] = s[j];
		if (s[j] == ((unsigned char)c))
		return (dst + j + 1);
			j++;
	}
	return (NULL);
}
