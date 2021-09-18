/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julianaalencar <julianaalencar@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 10:15:55 by julianaalen       #+#    #+#             */
/*   Updated: 2021/09/18 17:15:50 by julianaalen      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	ft_len(int nb)
{
	size_t	j;
	int		n;

	j = 0;
	if (nb < 0)
	{
		j++;
		n = nb * -1;
	}
	else
		n = nb;
	while (n /10)
	{
		j++;
		n = n / 10;
	}
	j++;
	return (j);
}

static int	ft_pos(int nb)
{
	if (nb < 0)
		return (0);
	return (1);
}

char	*ft_itoa(int n)
{
	char			*res;
	unsigned int	t;
	size_t			j;

	res = (char *)malloc(ft_len(n) + 1);
	if (!(res))
		return (NULL);
	j = 0;
	if (n < 0)
	{
		res[j] = '-';
		j++;
		t = -n;
	}
	else
		t = n;
	res[ft_len(n)] = '\0';
	while (j < ft_len(n))
	{
		res[ft_len(n) - j - ft_pos(n)] = (t % 10) + 48;
		t = t / 10;
		j++;
	}
	return (res);
}
