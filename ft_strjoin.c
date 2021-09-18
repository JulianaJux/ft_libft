/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julianaalencar <julianaalencar@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 09:37:20 by julianaalen       #+#    #+#             */
/*   Updated: 2021/09/18 17:44:15 by julianaalen      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	char	*ostr;

	if (s1 == 0 || s2 == 0)
		return (0);
	str = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!str)
		return (NULL);
	ostr = str + ft_strlen(s1);
	ft_memcpy(str, s1, ft_strlen(s1));
	ft_memcpy(ostr, s2, ft_strlen(s2));
	str[ft_strlen(s1) + ft_strlen(s2)] = 0;
	return (str);
}
