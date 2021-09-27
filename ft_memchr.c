/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-alen <jde-alen@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 16:07:17 by jde-alen          #+#    #+#             */
/*   Updated: 2021/09/27 16:07:23 by jde-alen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*str;
	size_t	j;

	j = 0;
	str = (char *)s;
	while (j < n)
	{
		if ((unsigned char)str[j] == (unsigned char)c)
			return ((char *) s + j);
		j++;
	}
	return (NULL);
}
