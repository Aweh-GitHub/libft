/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thantoni <thantoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 18:45:42 by thantoni          #+#    #+#             */
/*   Updated: 2025/09/03 19:12:09 by thantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strnstr(const char *str, const char *find, size_t n)
{
	size_t	i;
	size_t	find_i;

	if (find == NULL || find[0] == '\0')
		return ((char *)str);
	i = 0;
	while (str[i] && i < n)
	{
		find_i = 0;
		while (find[find_i]
			&& str[i + find_i]
			&& find[find_i] == str[i + find_i]
			&& i + find_i < n)
			find_i++;
		if (!find[find_i])
			return (&((char *)str)[i]);
		i++;
	}
	return (NULL);
}
