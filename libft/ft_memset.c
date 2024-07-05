/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleitas <bfleitas@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 12:00:25 by bfleitas          #+#    #+#             */
/*   Updated: 2024/02/29 17:45:00 by bfleitas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
  Parameters: 
      s: Pointer to the memory area to fill.
      c: Value to be set. It is treated as an unsigned char and converted to
	  an unsigned char before being stored.
      n: Number of bytes to be set to the value.
  Return value:
      A pointer to the memory area 's'.
  Description:
      Sets the first 'n' bytes of the memory area pointed to by 's' to
	  the specified value 'c'.
      Returns a pointer to the memory area 's'.
*/
void	*ft_memset(void *s, int c, size_t n)
{
	char	value;
	char	*ptr;

	value = c & 0xFF;
	ptr = (char *)s;
	while (n--)
	{
		*ptr = value;
		ptr++;
	}
	return (s);
}

///TEST
