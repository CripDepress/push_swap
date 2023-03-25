/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_print.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akeawdou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 14:45:33 by akeawdou          #+#    #+#             */
/*   Updated: 2023/03/25 14:51:39 by akeawdou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_lst_print(t_list *lst)
{
	while (*lst != NULL)
	{
		printf("val:%5d idx: %5d\n", lst->val, lst->idx);
		lst = lst->next;
	}
}
