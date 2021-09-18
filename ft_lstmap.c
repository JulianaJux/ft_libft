/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julianaalencar <julianaalencar@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 17:53:20 by julianaalen       #+#    #+#             */
/*   Updated: 2021/09/18 17:27:19 by julianaalen      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*dst;

	if (!lst || !f)
		return (NULL);
	dst = ft_lstnew(f(lst->content));
		if (dst == NULL)
		{
			ft_lstclear(&dst, del);
			return (NULL);
		}
		dst->next = ft_lstmap(lst->next, f, del);
		return (dst);
}
