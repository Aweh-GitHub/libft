/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thantoni <thantoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 19:53:32 by thantoni          #+#    #+#             */
/*   Updated: 2025/09/03 20:00:52 by thantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(const char *src)
{
	char	*dup;
	size_t	src_len;

	src_len = 0;
	while (src[src_len])
		src_len++;
	dup = malloc(sizeof(char) * (src_len + 1));
	src_len = 0;
	while (src[src_len])
	{
		dup[src_len] = src[src_len];
		src_len++;
	}
	dup[src_len] = '\0';
	return (dup);
}
