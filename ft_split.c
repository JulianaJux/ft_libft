/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-alen <jde-alen@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 10:13:27 by julianaalen       #+#    #+#             */
/*   Updated: 2021/09/27 16:19:33 by jde-alen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_word(const char *s, char c)
{
	size_t	word;

	if (s == 0)
		return (0);
	word = 0;
	while (*s != 0)
	{
		while (*s == c && *s != 0)
			s++;
		if (*s != c && *s != 0)
		{
			word++;
			while (*s != c && *s != 0)
				s++;
		}
	}
	return (word);
}

static	int	ft_len(const char *s, char c)
{
	size_t	count;

	count = 0;
	while (*s != c && *s != 0)
	{
		count++;
		s++;
	}
	return (count);
}

static char	**ft_control_malloc(char **tab)
{
	size_t	j;

	j = 0;
	while (tab[j])
	{
		free(tab[j]);
		j++;
	}
	free(tab);
	return (NULL);
}

static char	**ft_alloc(char **spl, const char *s, char c, size_t w)
{
	size_t	len;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (s[i] != 0 && j < w)
	{
		if (s[i] != c)
		{
			len = ft_len(&s[i], c);
			spl[j] = ft_substr(s, i, len);
			if (!spl[j])
				return (ft_control_malloc(spl));
			j++;
			i += len - 1;
		}
		i++;
	}
	spl[j] = 0;
	return (spl);
}

char	**ft_split(char const *s, char c)
{
	char	**spl;
	size_t	wc;

	wc = ft_word(s, c);
	spl = (char **)malloc((wc + 1) * sizeof(char *));
	if (!(s || spl))
		return (NULL);
	return (ft_alloc(spl, s, c, wc));
}
