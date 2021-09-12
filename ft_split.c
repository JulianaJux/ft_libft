/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julianaalencar <julianaalencar@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 10:13:27 by julianaalen       #+#    #+#             */
/*   Updated: 2021/09/12 16:43:08 by julianaalen      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_word(const char *s, char c)
{
	int	word;

	word = 0;
	if (*s != c && *s)
	{
		s++;
		word++;
	}
	while (*s)
	{
		while (*s == c)
		{
			s++;
			if (*s != c && *s)
				word++;
		}
		s++;
	}
	return (word);
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
	return(NULL);
}

static	int	ft_len(const char *s, char c)
{
	int count;

	count = 0;
	while (*s != c && *s)
	{
		count++;
		s++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	int		j;
	int 	t;
	char	**spl;

	j = 0;
	t = 0;
	if (!s || (!spl = (char **)malloc(sizeof(char *) * (ft_word(s, c) + 1))))
		return (NULL);
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s != c && *s)
		{
			if (!spl[j] = (char *)malloc(sizeof(char) * (ft_len(s, c) + 1)))
				return (ft_control_malloc(spl));
			while (*s != c && *s)	
				spl[j][t++] = (char)*s++;
			spl[j][t] = '\0';
			j++
			t = 0;
		}
	}
	spl[j] = NULL;
	return (spl);
}
