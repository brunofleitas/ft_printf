/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleitas <bfleitas@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 16:47:27 by bfleitas          #+#    #+#             */
/*   Updated: 2024/02/29 12:45:36 by bfleitas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
  Parameters: 
      lst: A pointer to a pointer to the first element of the list.
      new: The element to add at the beginning of the list.
  Description:
      Adds the element 'new' at the beginning of the list pointed to by 'lst'.
      If 'lst' or 'new' is NULL, does nothing.
      Otherwise, sets the next pointer of 'new' to point to 
	  the current first element of the list,
      and updates 'lst' to point to 'new'.
*/
void	ft_lstadd_front(t_list **lst, t_list *new)
{
	t_list	*tmp;

	tmp = *lst;
	*lst = new;
	new->next = tmp;
}
