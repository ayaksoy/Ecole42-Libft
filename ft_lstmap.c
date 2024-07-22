/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaksoy <aaksoy@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 22:53:05 by aaksoy            #+#    #+#             */
/*   Updated: 2023/12/04 13:11:59 by aaksoy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*temp;

	if (!lst || !f)
		return (NULL);
	new = NULL;
	while (lst)
	{
		temp = ft_lstnew (f (lst->content));
		if (!temp)
		{
			ft_lstclear (&new, del);
			return (NULL);
		}
		ft_lstadd_back (&new, temp);
		lst = lst->next;
	}
	return (new);
}
