/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleitas <bfleitas@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 16:55:04 by bfleitas          #+#    #+#             */
/*   Updated: 2024/03/01 10:46:29 by bfleitas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
  Parameters: 
      dst: The destination string where 'src' will be concatenated.
      src: The source string to concatenate onto 'dst'.
      size: The size of the destination buffer 'dst'.
  Return value:
      The total length of the string that would have been created if 'dst' 
	  had enough space, excluding the terminating null byte.
      If the return value is greater than or equal to 'size', it means 
	  truncation occurred.
  Description:
      Concatenates the string 'src' onto the end of 'dst', ensuring that 
	  the total length of the resulting string does not exceed 
	  'size' - 1 bytes.
      Appends the null-terminator to the resulting string.
      Returns the total length of the string that would have been created 
	  if 'dst' had enough space, excluding the terminating null byte.
*/
/*
size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	d;
	size_t	s;

	i = ft_strlen(dst);
	j = 0;
	d = i;
	s = ft_strlen(src);
	if (dst == NULL || src == NULL)
		return (size + s);
	if (size == 0 || i == size)
		return (size + s);
	while (i < size - 1 && src[j] != '\0')
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = 0;
	if (size <= d)
		return (s + size);
	else
		return (d + s);
}
*/
size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	d;
	size_t	s;

	i = 0;
	while (dst[i] && i < size)
		i++;
	d = i;
	s = 0;
	while (src[s])
		s++;
	if (i == size)
		return (size + s);
	j = 0;
	while (src[j] && i + 1 < size)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (d + s);
}
