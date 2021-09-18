/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julianaalencar <julianaalencar@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 10:15:55 by julianaalen       #+#    #+#             */
/*   Updated: 2021/09/18 16:51:54 by julianaalen      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_len(long nb)
{
	int	len;

	len = 0;
	while (nb != 0)
	{
		nb /= 10;
		len++;
	}
	len ++;
	return (len);
}

char	*ft_itoa(int n)
{
	char	*res;
	long	t;
	int		j;

	j = 0;
	if (n < 0)
		j++;
	t = n;
	if (t < 0)
		t = -t;
	j = ft_len(t);
	res = (char *)malloc(sizeof(char) * (j + 1));
	if (!(res))
		return (NULL);
	res[j] = '\0';
	while (j-- > 0)
	{
		res[j] = (t % 10 + '0');
		t = t / 10;
	}
	if ((res[0] == '0') && (res[1] != '\0'))
		res[0] = '-';
	return (res);
}
