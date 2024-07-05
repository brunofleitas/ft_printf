/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleitas <bfleitas@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 16:48:10 by bfleitas          #+#    #+#             */
/*   Updated: 2024/02/29 14:45:50 by bfleitas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
  Parameters: 
      lst: The pointer to the first element of the list to be mapped.
      f: The function to apply to each element of the list.
      del: The function used to delete the content of any new 
	  element in case of failure.
  Return value:
      A pointer to the first element of the new list created 
	  by applying 'f' to each element of 'lst'.
      NULL if memory allocation fails or if 'lst', 'f', or 'del' is NULL.
  Description:
      Creates a new list by applying the function 'f' 
	  to each element of the list 'lst'.
      If memory allocation fails during the creation of the new list, 
	  it frees the memory of any
      newly created elements using 'del' and returns NULL.
*/
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*last_node;
	t_list	*new_node;

	new_list = NULL;
	last_node = NULL;
	while (lst && f && del)
	{
		new_node = (t_list *)malloc(sizeof(t_list));
		if (!new_node)
		{
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		new_node->content = f(lst->content);
		new_node->next = NULL;
		if (!new_list)
			new_list = new_node;
		else
			last_node->next = new_node;
		last_node = new_node;
		lst = lst->next;
	}
	return (new_list);
}
