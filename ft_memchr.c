/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thantoni <thantoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 18:12:41 by thantoni          #+#    #+#             */
/*   Updated: 2025/09/03 18:41:22 by thantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memchr(const void *ptr, int value, size_t n)
{
	unsigned char	*mem;
	unsigned char	u_value;
	size_t			i;

	mem = (unsigned char *)ptr;
	u_value = (unsigned char)value;
	i = 0;
	while (i < n - 1)
	{
		if (mem[i] == u_value)
			return (&mem[i]);
		i++;
	}
	return (NULL);
}
