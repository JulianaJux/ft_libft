/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-alen <jde-alen@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 18:01:39 by julianaalen       #+#    #+#             */
/*   Updated: 2021/09/27 16:49:40 by jde-alen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	j;

	if (!s)
		return (NULL);
	j = 0;
	while (s[j])
		j++;
	while (j >= 0)
	{
		if (s[j] == (char)c)
			return ((char *)(s + j));
		j--;
	}
	return (NULL);
}
