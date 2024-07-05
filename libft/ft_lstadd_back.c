/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleitas <bfleitas@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 16:46:11 by bfleitas          #+#    #+#             */
/*   Updated: 2024/02/29 12:42:17 by bfleitas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
  Parameters: 
      lst: A pointer to a pointer to the first element of the list.
      new: The element to add at the end of the list.
  Description:
      Adds the element 'new' at the end of the list pointed to by 'lst'.
      If 'lst' or 'new' is NULL, does nothing.
      If the list is empty, sets 'lst' to point to 'new'.
      Otherwise, traverses the list to find the last element and 
	  appends 'new' to it.
*/
void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*tmp;

	if (!lst || !new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	tmp = *lst;
	while (tmp->next != NULL)
		tmp = tmp->next;
	tmp->next = new;
}
