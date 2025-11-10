/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thantoni <thantoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 14:57:30 by thantoni          #+#    #+#             */
/*   Updated: 2025/11/05 10:31:36 by thantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	is_contained(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

static size_t	ft_strlen(char const *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trim_str;
	size_t	trim_start;
	size_t	trim_end;
	size_t	len;
	size_t	i;

	len = ft_strlen(s1);
	trim_start = 0;
	while (trim_start < len && is_contained(s1[trim_start], set))
		trim_start++;
	trim_end = len;
	while (trim_end > trim_start && is_contained(s1[trim_end - 1], set))
		trim_end--;
	trim_str = malloc(sizeof(char) * (trim_end - trim_start + 1));
	trim_str[(trim_end - trim_start)] = '\0';
	i = 0;
	while (i + trim_start < trim_end)
	{
		trim_str[i] = s1[i + trim_start];
		i++;
	}
	return (trim_str);
}
