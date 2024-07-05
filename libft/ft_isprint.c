/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleitas <bfleitas@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 11:46:54 by bfleitas          #+#    #+#             */
/*   Updated: 2024/02/29 15:24:30 by bfleitas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
  Parameters: 
      c: The character to check.
  Return value:
      Non-zero value if 'c' is a printable character (ASCII 32-126), 
      0 otherwise.
  Description:
      Checks whether the input character is a printable character.
      Returns a non-zero value if 'c' is within the range of printable 
      ASCII characters (32-126),
      otherwise returns 0.
*/
int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (c);
	else
		return (0);
}
