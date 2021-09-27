/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-alen <jde-alen@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 18:38:20 by julianaalen       #+#    #+#             */
/*   Updated: 2021/09/27 16:18:19 by jde-alen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*d;
	unsigned char	*s;
	size_t			j;

	j = 0;
	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	if (d == s)
		return (d);
	if ((s < d) && ((s + len) > d))
		while (j++ < len)
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
