/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-alen <jde-alen@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 17:53:05 by julianaalen       #+#    #+#             */
/*   Updated: 2021/09/27 15:54:16 by jde-alen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*atl;
	t_list	*nxt;

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
