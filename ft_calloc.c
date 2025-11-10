/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thantoni <thantoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 19:48:01 by thantoni          #+#    #+#             */
/*   Updated: 2025/09/03 19:59:40 by thantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_calloc(size_t n, size_t sizeof_type)
{
	unsigned char	*mem;
	size_t			alloc_size;
	size_t			i;

	alloc_size = n * sizeof_type;
	mem = malloc(alloc_size);
	i = 0;
	while (i < alloc_size)
	{
		mem[i] = 0;
		i++;
	}
	return (mem);
}
