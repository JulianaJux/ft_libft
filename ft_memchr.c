/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-alen <julianaalencar@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/25 16:33:35 by julianaalen       #+#    #+#             */
/*   Updated: 2021/07/25 16:33:35 by julianaalen      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************* */

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
