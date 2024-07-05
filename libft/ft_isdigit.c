/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleitas <bfleitas@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 16:46:03 by bfleitas          #+#    #+#             */
/*   Updated: 2024/02/29 12:33:04 by bfleitas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
  Parameters: 
      c: The character to check.
  Return value:
      1 if 'c' is a digit (0-9), 0 otherwise.
  Description:
      Checks whether the input character is a digit.
      Returns 1 if 'c' is within the range of digits (ASCII values 48-57),
	  otherwise returns 0.
*/
int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
