/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleitas <bfleitas@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 16:49:57 by bfleitas          #+#    #+#             */
/*   Updated: 2024/02/29 14:57:32 by bfleitas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
  Parameters: 
      c: The character to write to the file descriptor.
      fd: The file descriptor to write to.
  Description:
      Writes the character 'c' to the file descriptor 'fd'.
*/
void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
