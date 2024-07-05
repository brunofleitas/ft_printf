/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleitas <bfleitas@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 12:13:17 by bfleitas          #+#    #+#             */
/*   Updated: 2024/02/29 15:20:04 by bfleitas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
  Parameters: 
      s1: The first string to compare.
      s2: The second string to compare.
      n: The maximum number of characters to compare.
  Return value:
      An integer less than, equal to, or greater than zero if 
	  the first 'n' characters of 's1'
      are found, respectively, to be less than, to match, or be greater 
	  than the first 'n' characters of 's2'.
  Description:
      Compares the first 'n' characters of the strings 's1' and 's2' 
	  lexicographically.
      Returns an integer less than, equal to, or greater than zero 
	  depending on whether 's1' is found to be less than, equal to, 
	  or greater than 's2'.
*/
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && (s1[i] || s2[i]))
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}
