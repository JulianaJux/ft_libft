/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julianaalencar <julianaalencar@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 17:53:20 by julianaalen       #+#    #+#             */
/*   Updated: 2021/09/18 15:54:39 by julianaalen      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*dst;
	t_list	*first;

	if (!lst || !f)
		return (NULL);
	dst = f(lst)
		if (!(dst))
			return (NULL);
	first = dst;
	lst = lst->next;
	while (lst)
	{
		dst->next = f(lst)
			if (!(dst))
				return (NULL);
		lst = lst->next;
		dst = dst->next;
	}
	return (first);
}
