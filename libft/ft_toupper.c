/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleitas <bfleitas@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 12:10:57 by bfleitas          #+#    #+#             */
/*   Updated: 2024/02/29 15:23:44 by bfleitas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
  Parameters: 
      c: The character to convert to uppercase.
  Return value:
      The uppercase equivalent of the input character 'c'.
  Description:
      Converts the input character 'c' to uppercase if it is a lowercase letter
      Returns the input character 'c' unchanged if it is not a lowercase letter
*/
int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		return (c - 32);
	return (c);
}
