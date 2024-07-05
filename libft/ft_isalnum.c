/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleitas <bfleitas@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 11:41:03 by bfleitas          #+#    #+#             */
/*   Updated: 2024/02/29 12:33:38 by bfleitas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
  Parameters: 
      c: The character to check.
  Return value:
      1 if 'c' is alphanumeric (a letter or a digit), 0 otherwise.
  Description:
      Checks whether the input character is alphanumeric.
      It returns 1 if the character is either a letter (ft_isalpha)
	  or a digit (ft_isdigit), otherwise returns 0.
*/
int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}
