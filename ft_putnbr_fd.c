/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julianaalencar <julianaalencar@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 15:00:06 by julianaalen       #+#    #+#             */
/*   Updated: 2021/09/06 15:08:25 by julianaalen      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int j;

	if (n < 0)
	{
		j = n * -1;
		ft_putchar_fd('-', fd);
	}
	else
	{
		j = n;
	}
	if (j / 10 < 1)
	{
		ft_putchar_fd((j + '0'), fd);
	}
	else
	{
		ft_putnbr_fd(j / 10, fd);
		ft_putnbr_fd(j % 10, fd);
	}
}
