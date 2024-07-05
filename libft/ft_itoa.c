/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleitas <bfleitas@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 12:36:40 by bfleitas          #+#    #+#             */
/*   Updated: 2024/02/29 12:40:09 by bfleitas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
  Parameters: 
      lln: The long long integer value.
      sign: The sign of the integer (1 for positive, 0 for negative).
  Return value:
      The size of memory required to store the integer.
  Description:
      Calculates the size of memory needed to store a long long integer,
	  considering its sign.
      It iteratively counts the digits in the integer while handling the sign.
*/
int	mallocsize(long long lln, int sign)
{
	int	i;

	i = 0;
	if (sign)
		i++;
	while (lln != 0)
	{
		lln /= 10;
		i++;
	}
	if (i == 0)
		i++;
	return (i);
}

/*
  Parameters: 
      newstr: Pointer to the string where the result will be stored.
      lln: The long long integer value.
      sign: The sign of the integer (1 for positive, 0 for negative).
      size: The size of the string 'newstr'.
  Description:
      Constructs a string representation of the long long integer 'lln'
	  and stores it in 'newstr'.
      If 'lln' is zero, it stores '0' in 'newstr'.
      Otherwise, it iteratively extracts digits from 'lln' 
	  and places them in 'newstr' in reverse order.
      If 'sign' is non-zero, it prepends '-' to the string.
*/
void	createstr(char *newstr, long long lln, int sign, int size)
{
	int	i;

	newstr[size] = '\0';
	if (lln == 0)
	{
		newstr[0] = '0';
		return ;
	}
	i = size - 1;
	while (lln != 0)
	{
		newstr[i] = (lln % 10) + '0';
		lln /= 10;
		i--;
	}
	if (sign)
		newstr[0] = '-';
}

/*
  Parameters: 
      n: The integer value to be converted to a string.
  Return value:
      A newly allocated string representing the integer value.
      NULL if the allocation fails.
  Description:
      Converts the integer 'n' to a string representation.
      It determines the sign of 'n', calculates the size needed 
	  for the string,
      allocates memory for the string, and constructs the string
	  using createstr function.
*/
char	*ft_itoa(int n)
{
	int			sign;
	long long	lln;
	int			size;
	char		*newstr;

	sign = 0;
	lln = n;
	if (lln < 0)
	{
		lln = -lln;
		sign = 1;
	}
	size = mallocsize(lln, sign);
	newstr = malloc((size + 1) * sizeof(char));
	if (!newstr)
		return (NULL);
	createstr(newstr, lln, sign, size);
	return (newstr);
}
