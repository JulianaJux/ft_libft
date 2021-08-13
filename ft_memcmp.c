/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julianaalencar <julianaalencar@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/25 17:05:09 by julianaalen       #+#    #+#             */
/*   Updated: 2021/08/13 09:21:14 by julianaalen      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    char *str1;
    char *str2;
    size_t j;

    j = 0;
    str1 = (char *)s1;
    str2 = (char *)s2;

    while (j < n)
    {
        if (str1[j] != str2[j])
            return ((unsigned char)str1[j] - (unsigned char)str2[j]);
        j++;
    }
    return(0);
}
