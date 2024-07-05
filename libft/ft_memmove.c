/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleitas <bfleitas@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 16:49:26 by bfleitas          #+#    #+#             */
/*   Updated: 2024/02/29 14:55:53 by bfleitas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
  Parameters: 
      dest: Pointer to the destination memory area where data will be moved.
      src: Pointer to the source memory area from where data will be moved.
      n: Number of bytes to move.
  Return value:
      A pointer to the destination memory area.
  Description:
      Moves 'n' bytes of data from the memory area pointed to by 'src' 
	  to the memory area pointed to by 'dest'.
      Handles overlapping memory areas correctly by copying the data 
	  in the proper direction.
      Returns a pointer to the destination memory area ('dest').
*/
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*cdest;
	char	*csrc;
	size_t	i;

	i = 0;
	if (!dest && !src)
		return (NULL);
	cdest = (char *)dest;
	csrc = (char *)src;
	if (dest <= src)
	{
		while (i < n)
		{
			cdest[i] = csrc[i];
			i++;
		}
	}
	else if (dest > src)
	{
		while (n--)
		{
			cdest[n] = csrc[n];
		}
	}
	return (dest);
}
