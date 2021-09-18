/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julianaalencar <julianaalencar@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 17:53:20 by julianaalen       #+#    #+#             */
/*   Updated: 2021/09/18 19:13:21 by julianaalen      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*p;
	t_list	*res;

	res = 0;
	if (f)
	{
		while (lst)
		{
			p = ft_lstnew(f(lst->content));
			if (p == NULL)
			{
				ft_lstclear(&res, del);
				return (0);
			}
			ft_lstadd_back(&res, p);
			lst = lst->next
			}
	}
	return (res);
	}
