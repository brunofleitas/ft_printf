/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleitas <bfleitas@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 16:49:10 by bfleitas          #+#    #+#             */
/*   Updated: 2024/03/01 10:33:47 by bfleitas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
  Parameters: 
      str: Pointer to the memory area to search.
      c: The byte value to search for.
      n: Number of bytes to search.
  Return value:
      A pointer to the first occurrence of byte 'c' in the first 'n' 
	  bytes of memory area 'str'.
      NULL if 'c' is not found in the specified memory area.
  Description:
      Searches for the first occurrence of byte 'c' in the memory area 
	  pointed to by 'str'.
      It compares each byte in the memory area with 'c', up to 'n' bytes.
      Returns a pointer to the first occurrence of 'c' if found, otherwise 
	  returns NULL.
*/
void	*ft_memchr(const void *s, int c, size_t n)
{
	while (n--)
	{
		if (*(unsigned char *)s++ == (unsigned char)c)
			return ((void *)s - 1);
	}
	return (NULL);
}
