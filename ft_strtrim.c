/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julianaalencar <julianaalencar@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 21:38:13 by julianaalen       #+#    #+#             */
/*   Updated: 2021/09/18 15:31:15 by julianaalen      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	const char	*tmp;
	char		*new_str;
	size_t		len;
	size_t		cp_len;

	if (!s1)
		return (NULL);
	tmp = s1;
	while (*tmp && (*tmp == ' ' || *tmp == '\t' || *tmp == '\n'))
		tmp++;
	len = ft_strlen(tmp);
	cp_len = len;
	while ((tmp[len - 1] == ' ' || tmp[len - 1] == '\t' || tmp[len -1] == '\n')
					&& len >= 1)
			len--;
	if (len == cp_len)
			return (ft_strdup(tmp));
	new_str = (char *)malloc(sizeof(char) * (len + 1))
		if (!(new_str))
			return (NULL);
	ft_strncpy(new_str, tmp, len);
	new_str[len] = '\0';
	return (new_str);
}
