/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thantoni <thantoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 18:16:13 by thantoni          #+#    #+#             */
/*   Updated: 2025/09/03 19:37:37 by thantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_memcmp(const void *ptr1, const void *ptr2, size_t n)
{
	const unsigned char	*mem1;
	const unsigned char	*mem2;
	size_t				i;

	if (n == 0)
		return (0);
	mem1 = (const unsigned char *)ptr1;
	mem2 = (const unsigned char *)ptr2;
	i = 0;
	while (i < n - 1 && mem1[i] && mem2[i] && mem1[i] == mem2[i])
		i++;
	return (mem1[i] - mem2[i]);
}
