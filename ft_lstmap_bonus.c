/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfarnos- <jfarnos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 05:55:38 by jfarnos-          #+#    #+#             */
/*   Updated: 2023/02/10 06:19:40 by jfarnos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*mylst;
	t_list	*aux;
	
	if (!f || !del)
		return (NULL);
	mylst = NULL;
	while (lst)
	{
		aux = lst;
		ft_lstadd_back(&mylst, ft_lstnew(f(lst->content)));
		lst = lst->next;
		ft_lstdelone(lst, del);
	}
	return (mylst);
}