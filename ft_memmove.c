/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thantoni <thantoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 19:04:51 by thantoni          #+#    #+#             */
/*   Updated: 2025/09/03 19:24:53 by thantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memmove(void *ptr_dest, const void *ptr_src, size_t n)
{
	size_t				i;
	unsigned char		*mem_dest;
	const unsigned char	*mem_src;

	mem_dest = (unsigned char *)ptr_dest;
	mem_src = (const unsigned char *)ptr_src;
	if (mem_dest > mem_src)
	{
		i = n;
		while (i > 0)
		{
			i--;
			mem_dest[i] = mem_src[i];
		}
	}
	else
	{
		i = 0;
		while (i < n)
		{
			mem_dest[i] = mem_src[i];
			i++;
		}
	}
	return (ptr_dest);
}
