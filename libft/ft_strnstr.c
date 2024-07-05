/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleitas <bfleitas@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 16:56:25 by bfleitas          #+#    #+#             */
/*   Updated: 2024/03/01 11:00:19 by bfleitas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
  Parameters: 
      big: The string to search within.
      little: The substring to search for.
      n: The maximum number of characters to search within 'big'.
  Return value:
      A pointer to the first occurrence of 'little' in 'big', limited to 
	  the first 'n' characters of 'big'.
      NULL if 'little' is not found within the first 'n' characters of 'big'.
  Description:
      Searches for the substring 'little' within the string 'big', limited 
	  to the first 'n' characters of 'big'.
      Returns a pointer to the first occurrence of 'little' in 'big' if found, 
	  otherwise returns NULL.
*/
char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	j;

	if (!big && !len)
		return (NULL);
	if (!*little)
		return ((char *)big);
	while (*big && len--)
	{
		j = 0;
		while (*(big + j) == *(little + j) && *(little + j) && j <= len)
		{
			if (!*(little + j + 1))
				return ((char *)big);
			j++;
		}
		big++;
	}
	return (NULL);
}
