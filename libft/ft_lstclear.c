/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleitas <bfleitas@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 11:47:42 by bfleitas          #+#    #+#             */
/*   Updated: 2024/02/29 12:48:21 by bfleitas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
  Parameters: 
      lst: A pointer to a pointer to the first element of the list.
      del: The function used to delete the content of each element.
  Description:
      Deletes and frees the memory of every element in 
	  the list pointed to by 'lst',
      using the function 'del' to delete the content of each element.
      Updates 'lst' to NULL.
*/
void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;

	while (lst && *lst)
	{
		tmp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = tmp;
	}
}
