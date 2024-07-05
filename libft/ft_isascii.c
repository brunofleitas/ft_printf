/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleitas <bfleitas@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 16:46:00 by bfleitas          #+#    #+#             */
/*   Updated: 2024/02/29 12:33:19 by bfleitas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
  Parameters: 
      c: The character to check.
  Return value:
      1 if 'c' is a valid ASCII character (0-127), 0 otherwise.
  Description:
      Checks whether the input character is a valid ASCII character.
      Returns 1 if 'c' is within the range of ASCII characters (0-127),
	  otherwise returns 0.
*/
int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
