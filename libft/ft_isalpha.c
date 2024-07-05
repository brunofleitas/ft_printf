/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleitas <bfleitas@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 11:45:32 by bfleitas          #+#    #+#             */
/*   Updated: 2024/02/29 12:33:28 by bfleitas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
  Parameters: 
      c: The character to check.
  Return value:
      Non-zero value if 'c' is an alphabetic character (a-z or A-Z),
	  0 otherwise.
  Description:
      Checks whether the input character is an alphabetic character.
      Returns a non-zero value if 'c' is within the range of uppercase
	  or lowercase letters (ASCII values),
      otherwise returns 0.
*/
int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (c);
	else
		return (0);
}
