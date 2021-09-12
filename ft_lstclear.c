/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julianaalencar <julianaalencar@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 17:53:05 by julianaalen       #+#    #+#             */
/*   Updated: 2021/09/12 18:18:30 by julianaalen      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list *atl;
	t_list *nxt;


	if (lst && *lst && del)
	{
		atl = *lst;
		while (atl)
		{
			nxt = atl->next;
			ft_lstdelone(atl, del);
			atl = nxt;
		}
		*lst = NULL;
	}
}
