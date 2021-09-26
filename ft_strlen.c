/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julianaalencar <julianaalencar@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/29 21:07:15 by julianaalen       #+#    #+#             */
/*   Updated: 2021/09/25 23:41:10 by julianaalen      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlen(const char *s)
{
	unsigned int	j;

	j = 0;
	while (*s != '\0')
	{
		j++;
		s++;
	}
	return (j);
}
