/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julianaalencar <julianaalencar@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 10:15:55 by julianaalen       #+#    #+#             */
/*   Updated: 2021/09/18 12:40:36 by julianaalen      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_len(long nb)
{
	int	len;

	len = 0;
	if (nb < 0)
	{
		nb = nb * -1;
		len++;
	}
	while (nb > 0)
	{
		nb = nb / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*res;
	long	t;
	int		j;

	t = n;
	j = ft_len(n);
	res = (char *)malloc(sizeof(char) * (j + 1));
	res[j--] = '\0';
	if (n == 0)
	{
		res[0] = 48;
		return (res);
	}
	if (n < 0)
	{
		res[0] = '-';
		n = n * -1;
	}
	while (n > 0)
	{
		res[j--] = 48 + (n % 10);
		n = n / 10;
	}
	return (res);
}
