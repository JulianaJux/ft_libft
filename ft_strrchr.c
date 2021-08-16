/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julianaalencar <julianaalencar@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 18:01:39 by julianaalen       #+#    #+#             */
/*   Updated: 2021/08/15 21:07:21 by julianaalen      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int			j;

	j = 0;
	while (s[j])
		j++;
	while (j >= 0)
	{
		if (s[j] == (char)c)
			return ((char *)(s + j));
		j--:
	}
	return (NULL);
}
