/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julianaalencar <julianaalencar@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 21:38:13 by julianaalen       #+#    #+#             */
/*   Updated: 2021/09/12 18:58:43 by julianaalen      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	ini;
	size_t	fim;
	char	*str;

	if (!s1 || !set)
		return (NULL);
	ini = 0;
	while (s1[ini] && ft_strchr(set, s1[ini]))
		ini++;
	fim = ft_strlen(s1 + ini);
	if (fim)
		while (s1[fim + ini - 1] != 0 && ft_strchr(set, s1[fim + ini - 1]) != 0)
			fim--;
	if (!(str = malloc(sizeof(char) * fim + 1)))
		return (NULL);
	ft_strlcpy(str, s1 + ini, fim);
	str[fim] = '\0';
	return (str);
}
