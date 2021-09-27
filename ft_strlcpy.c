/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-alen <jde-alen@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 16:33:29 by julianaalen       #+#    #+#             */
/*   Updated: 2021/09/27 16:48:47 by jde-alen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	srcsize;
	size_t	j;

	if (!src || !dst)
		return (0);
	srcsize = ft_strlen(src);
	j = 0;
	if (dstsize != 0)
	{
		while ((src[j] != '\0') && (j < (dstsize - 1)))
		{
			dst[j] = src[j];
			j++;
		}
		dst[j] = '\0';
	}
	return (srcsize);
}
