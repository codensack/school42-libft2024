/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmasur <thmasur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 12:59:16 by thmasur           #+#    #+#             */
/*   Updated: 2024/06/10 12:59:16 by thmasur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*s1_end;
	char	*r;

	if (!s1 || !set)
		return (NULL);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	if (!*s1)
		s1_end = (char *)s1;
	else
		s1_end = (char *)s1 + ft_strlen(s1) - 1;
	while ((s1_end != s1) && ft_strchr(set, *s1_end))
		s1_end--;
	r = ft_substr(s1, 0, s1_end + 1 - s1);
	return (r);
}
