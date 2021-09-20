/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julianaalencar <julianaalencar@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/18 19:00:52 by julianaalen       #+#    #+#             */
/*   Updated: 2021/09/19 15:28:14 by julianaalen      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	j;
	unsigned char	*d;
	unsigned char	*s;

	j = 0;
	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	while (j < n)
	{
		d[j] = s[j];
		j++;
	}
	return (dst);
}
