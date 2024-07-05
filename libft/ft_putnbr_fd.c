/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleitas <bfleitas@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 16:50:27 by bfleitas          #+#    #+#             */
/*   Updated: 2024/03/01 10:37:15 by bfleitas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
  Description:
      Auxiliary function to print a single digit 'n' to 
	  the file descriptor 'fd'.
*/
static void	print_digit(long n, int fd)
{
	char	num;

	num = n + '0';
	write(fd, &num, 1);
}

/*
  Description:
      Auxiliary function to recursively print the digits of 
	  the number 'n' to the file descriptor 'fd'.
*/
static void	recursive(long n, int fd)
{
	if (n > 9)
		recursive(n / 10, fd);
	print_digit(n % 10, fd);
}

/*
  Parameters: 
      nb: The integer to be written to the file descriptor.
      fd: The file descriptor to write to.
  Description:
      Writes the integer 'nb' to the file descriptor 'fd'.
      If 'nb' is negative, writes a '-' sign before printing 
	  the absolute value of 'nb'.
      Uses helper functions to print the digits of 'nb'.
*/
void	ft_putnbr_fd(int n, int fd)
{
	long	nb;

	nb = n;
	if (n < 0)
	{
		write(fd, "-", 1);
		nb = nb * -1;
	}
	if (nb < 10)
		print_digit(nb, fd);
	else
		recursive(nb, fd);
}
