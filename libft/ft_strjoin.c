/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleitas <bfleitas@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 16:54:42 by bfleitas          #+#    #+#             */
/*   Updated: 2024/02/29 15:14:48 by bfleitas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
  Parameters: 
      s1: The first string to concatenate.
      s2: The second string to concatenate.
  Return value:
      A newly allocated string resulting from the concatenation 
	  of 's1' and 's2'.
      NULL if memory allocation fails or if both 's1' and 's2' are NULL.
  Description:
      Concatenates the strings 's1' and 's2' into a newly allocated string.
      Allocates memory for the resulting string and copies the contents 
	  of 's1' and 's2' into it.
      Returns a pointer to the newly allocated string.
*/
char	*ft_strjoin(char const *s1, char const *s2)
{
	int		ttlen;
	char	*join;

	if (!s1 && !s2)
		return (NULL);
	ttlen = ft_strlen(s1) + ft_strlen(s2);
	join = malloc((ttlen + 1) * sizeof(char));
	if (!join)
		return (NULL);
	ft_strlcpy(join, s1, ft_strlen(s1) + 1);
	ft_strlcat(join, s2, ttlen + 1);
	return (join);
}
