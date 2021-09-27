/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-alen <jde-alen@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 17:50:20 by julianaalen       #+#    #+#             */
/*   Updated: 2021/09/27 16:19:53 by jde-alen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	j;

	if (!s)
		return (NULL);
	j = 0;
	while (s[j])
	{
		if (s[j] == (char)c)
			return ((char *)(s + j));
		j++;
	}
	if (s[j] == (char)c)
		return ((char *)(s + j));
	return (NULL);
}
