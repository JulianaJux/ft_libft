/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-alen <jde-alen@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 16:07:36 by jde-alen          #+#    #+#             */
/*   Updated: 2021/09/27 16:07:45 by jde-alen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char	*str1;
	char	*str2;
	size_t	j;

	j = 0;
	str1 = (char *)s1;
	str2 = (char *)s2;
	while (j < n)
	{
		if (str1[j] != str2[j])
			return ((unsigned char)str1[j] - (unsigned char)str2[j]);
		j++;
	}
	return (0);
}
