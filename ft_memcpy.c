/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julianaalencar <julianaalencar@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/18 19:00:52 by julianaalen       #+#    #+#             */
/*   Updated: 2021/08/13 11:16:29 by julianaalen      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	j;
	char	*d;
	char	*s;

	j = 0;
	d = (char *)dst;
	s = (char *)src;
	while (j < n)
	{
		d[j] = s[j];
		j++;
	}
	return (dst);
}
