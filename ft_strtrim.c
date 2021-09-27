/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-alen <jde-alen@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 21:38:13 by julianaalen       #+#    #+#             */
/*   Updated: 2021/09/27 16:50:08 by jde-alen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char		*new_str;
	size_t		len;
	size_t		cp_len;

	if (s1 == 0 || set == 0)
		return (0);
	if (*s1 == 0)
	{
		new_str = (char *)ft_calloc(1, sizeof(char));
		if (new_str == 0)
			return (0);
		return (new_str);
	}
	while (*s1 != 0 && (ft_strchr(set, *s1)))
		s1++;
	cp_len = ft_strlen(s1);
	while (cp_len > 0 && (ft_strchr(set, s1[cp_len])))
		cp_len--;
	len = cp_len + 1;
	new_str = ft_substr(s1, 0, len);
	if (new_str == 0)
		return (0);
	return (new_str);
}
