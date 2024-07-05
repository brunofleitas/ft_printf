/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleitas <bfleitas@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 16:45:57 by bfleitas          #+#    #+#             */
/*   Updated: 2024/02/29 12:33:56 by bfleitas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
  Parameters: 
      s: Pointer to the memory area to zero out.
      n: Number of bytes to zero out.
  Description:
      This function sets the first 'n' bytes of the memory area 
	  pointed to by 's' to zero.
      It utilizes ft_memset to accomplish this task.
*/
void	ft_bzero(void *s, size_t n)
{
	s = ft_memset(s, 0, n);
}
