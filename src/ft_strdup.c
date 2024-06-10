/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmasur <thmasur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 12:58:19 by thmasur           #+#    #+#             */
/*   Updated: 2024/06/10 12:58:19 by thmasur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

char	*ft_strdup(const char *s)
{
	char	*r1;
	char	*r2;

	r1 = malloc(ft_strlen(s) + 1);
	if (!r1 || !s)
		return (NULL);
	r2 = r1;
	while (*s)
		*r1++ = *s++;
	*r1 = '\0';
	return (r2);
}
