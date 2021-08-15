/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julianaalencar <julianaalencar@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 18:38:20 by julianaalen       #+#    #+#             */
/*   Updated: 2021/08/15 19:11:08 by julianaalen      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*d;
	unsigned char	*s;
	size_t			j;

	j = 0;
	d = (char *)dst;
	s = (char *)src;
	if (d == s)
		return (d);
	if ((s < d) && ((s + len) > d))
		while (j++ < n)
			d[len - j] = s[len - j];
	else if ((s > d) && ((d + len) > s))
	{
		while (j < len)
		{
			d[j] = s[j];
			j++;
		}
	}
	else
		ft_memcpy(d, s, len);
	return (d);
}
