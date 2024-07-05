/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleitas <bfleitas@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 16:57:03 by bfleitas          #+#    #+#             */
/*   Updated: 2024/02/29 15:23:23 by bfleitas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
  Parameters: 
      c: The character to convert to lowercase.
  Return value:
      The lowercase equivalent of the input character 'c'.
  Description:
      Converts the input character 'c' to lowercase if it is an uppercase letter.
      Returns the input character 'c' unchanged if it is not an uppercase letter.
*/
int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		return (c + 32);
	return (c);
}
