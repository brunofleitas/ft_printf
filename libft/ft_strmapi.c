/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleitas <bfleitas@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 16:55:53 by bfleitas          #+#    #+#             */
/*   Updated: 2024/02/29 15:19:06 by bfleitas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
  Parameters: 
      s: The string to apply the function 'f' to.
      f: The function to apply to each character of the string, taking 
	  the index of the character as the first argument.
  Return value:
      A newly allocated string resulting from the application of 'f' 
	  to each character of 's'.
      NULL if memory allocation fails or if 's' or 'f' is NULL.
  Description:
      Applies the function 'f' to each character of the string 's', passing 
	  the index of the character as the first argument to 'f'.
      Allocates memory for the resulting string and stores 
	  the modified characters in it.
      Returns a pointer to the newly allocated string.
*/
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		len;
	char	*result;
	int		i;

	if (s == NULL || f == NULL)
		return (NULL);
	len = ft_strlen(s);
	result = (char *)malloc((len + 1) * sizeof(char));
	if (result == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		result[i] = f(i, s[i]);
		i++;
	}
	result[len] = '\0';
	return (result);
}
