/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julianaalencar <julianaalencar@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 17:53:20 by julianaalen       #+#    #+#             */
/*   Updated: 2021/09/18 19:44:25 by julianaalen      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*res;
	t_list	*p;

	res = NULL;
	while (lst != NULL)
	{
		p = ft_lstnew(f(lst->content));
		if (p == NULL)
		{
			if (res != NULL)
			{
				ft_lstclear(&res, del);
			}
			return (NULL);
		}
		ft_lstadd_back(&res, p);
		lst = lst->next;
	}
	return (res);
}
