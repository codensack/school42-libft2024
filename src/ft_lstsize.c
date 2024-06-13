/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmasur <thmasur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 13:22:28 by thmasur           #+#    #+#             */
/*   Updated: 2024/06/13 10:30:15 by thmasur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

int	ft_lstsize(t_list *lst)
{
	int	c_lst;

	c_lst = 0;
	while (lst)
	{
		lst = lst->next;
		c_lst++;
	}
	return (c_lst);
}
