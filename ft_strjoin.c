/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thantoni <thantoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 14:37:41 by thantoni          #+#    #+#             */
/*   Updated: 2025/09/08 16:28:07 by thantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strjoin(char const *str1, char const *str2)
{
	char		*result;
	size_t		str1_len;
	size_t		str2_len;
	size_t		i;

	str1_len = 0;
	while (str1[str1_len])
		str1_len++;
	str2_len = 0;
	while (str2[str2_len])
		str2_len++;
	result = malloc(sizeof(char) * (str1_len + str2_len + 1));
	result[str1_len + str2_len] = '\0';
	if (!result)
		return (NULL);
	i = -1;
	while (str1[++i])
		result[i] = str1[i];
	i = -1;
	while (str2[++i])
		result[str1_len + i] = str2[i];
	return (result);
}
