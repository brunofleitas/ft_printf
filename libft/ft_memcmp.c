/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleitas <bfleitas@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 11:52:07 by bfleitas          #+#    #+#             */
/*   Updated: 2024/02/29 14:50:32 by bfleitas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
  Parameters: 
      s1: Pointer to the first memory area to compare.
      s2: Pointer to the second memory area to compare.
      n: Number of bytes to compare.
  Return value:
      An integer less than, equal to, or greater than zero if the first 'n'
	  bytes of 's1' are found,
      respectively, to be less than, to match, or be greater than 
	  the first 'n' bytes of 's2'.
  Description:
      Compares the first 'n' bytes of memory areas 's1' and 's2' byte by byte.
      Returns an integer less than, equal to, or greater than zero 
	  depending on whether 's1' is
      found to be less than, equal to, or greater than 's2'.
*/
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int	i;

	i = 0;
	while (n--)
	{
		if (((unsigned char *)s1)[i] != ((unsigned char *)s2)[i])
		{
			return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
		}
		i++;
	}
	return (0);
}
