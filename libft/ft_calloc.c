/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleitas <bfleitas@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 12:24:54 by bfleitas          #+#    #+#             */
/*   Updated: 2024/02/29 12:33:48 by bfleitas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
  Parameters: 
      nmemb: Number of elements to allocate memory for.
      size: Size of each element.
  Return value:
      A pointer to the allocated memory.
      NULL if the allocation fails.
  Description:
      Allocates memory for an array of 'nmemb' elements,
	  each of size 'size' bytes.
      It ensures that the multiplication of 'nmemb' and 'size' 
	  does not overflow.
      Then, it allocates memory using malloc and initializes it to zero
	  using ft_bzero.
*/
void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	total_size;
	void	*new;

	total_size = size * nmemb;
	if (nmemb != 0 && total_size / nmemb != size)
	{
		return (NULL);
	}
	new = malloc(total_size);
	if (!new)
	{
		return (NULL);
	}
	ft_bzero(new, total_size);
	return (new);
}
