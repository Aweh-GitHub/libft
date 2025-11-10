/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thantoni <thantoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 19:43:05 by thantoni          #+#    #+#             */
/*   Updated: 2025/09/03 19:42:29 by thantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memcpy(void *ptr_dest, const void *ptr_src, size_t n)
{
	const unsigned char	*mem_src;
	unsigned char		*mem_dest;
	size_t				i;

	if (!ptr_dest && !ptr_src)
		return (NULL);
	mem_dest = (unsigned char *)ptr_dest;
	mem_src = (const unsigned char *)ptr_src;
	i = 0;
	while (i < n)
	{
		mem_dest[i] = mem_src[i];
		i++;
	}
	return (ptr_dest);
}
