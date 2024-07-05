/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleitas <bfleitas@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 11:56:15 by bfleitas          #+#    #+#             */
/*   Updated: 2024/02/29 14:51:17 by bfleitas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
  Parameters: 
      dest: Pointer to the destination memory area where data will be copied.
      src: Pointer to the source memory area from where data will be copied.
      n: Number of bytes to copy.
  Return value:
      A pointer to the destination memory area.
  Description:
      Copies 'n' bytes of data from the memory area pointed to by 'src' 
	  to the memory area pointed to by 'dest'.
      Returns a pointer to the destination memory area ('dest').
      Note: This function assumes that the memory areas 'dest' and 'src' 
	  do not overlap.
*/
void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	void	*first;

	first = dest;
	if (!src && !dest)
		return (dest);
	while (n--)
		*(char *)dest++ = *(char *)src++;
	return (first);
}
