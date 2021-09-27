/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-alen <jde-alen@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 17:53:20 by julianaalen       #+#    #+#             */
/*   Updated: 2021/09/27 15:54:55 by jde-alen         ###   ########.fr       */
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
