/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleitas <bfleitas@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 16:56:45 by bfleitas          #+#    #+#             */
/*   Updated: 2024/03/01 10:51:36 by bfleitas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
  Parameters: 
      s: The string to search within.
      c: The character to search for.
  Return value:
      A pointer to the last occurrence of character 'c' in the string 's'.
      NULL if 'c' is not found in 's'.
  Description:
      Searches for the last occurrence of character 'c' in the string 's'.
      Returns a pointer to the last occurrence of 'c' in 's' if found, 
	  otherwise returns NULL.
*/
char	*ft_strrchr(const char *s, int c)
{
	char	*last_occurrence;

	last_occurrence = NULL;
	while (*s)
	{
		if (*s == (char)c)
			last_occurrence = (char *)s;
		s++;
	}
	if (*s == (char)c)
		return ((char *)s);
	else
		return (last_occurrence);
}
