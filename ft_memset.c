/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thantoni <thantoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 19:36:04 by thantoni          #+#    #+#             */
/*   Updated: 2025/09/03 19:34:30 by thantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memset(void *ptr, int value, size_t n)
{
	unsigned char	*mem;
	unsigned char	u_value;
	size_t			i;

	mem = (unsigned char *)ptr;
	u_value = (unsigned char)value;
	i = 0;
	while (i < n)
	{
		mem[i] = u_value;
		i++;
	}
	return (mem);
}
