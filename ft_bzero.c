/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thantoni <thantoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 19:41:36 by thantoni          #+#    #+#             */
/*   Updated: 2025/09/03 18:39:13 by thantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	ft_bzero(void *ptr, size_t n)
{
	unsigned char	*mem;
	size_t			i;

	mem = (unsigned char *)ptr;
	i = 0;
	while (i < n)
	{
		mem[i] = 0;
		i++;
	}
}
