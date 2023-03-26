/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akeawdou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 21:25:26 by akeawdou          #+#    #+#             */
/*   Updated: 2023/03/25 20:56:11 by akeawdou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char *argv[])
{
	char	*str;
	t_list	**a;
	t_list	**b;

	if (argc < 2)
		return (1);
	str = check_input(argc, argv);
	a = (t_list **)malloc (sizeof (t_list *));
	b = (t_list **)malloc (sizeof (t_list *));
	if (a == NULL && b == NULL)
		return (1);
	/*
	makestack(argc, argv, a);
	if (is_sorted(a))
	{
		ft_lstclear(a);
		ft_lstclear(b);
		return (0);
	}
	sortstack(a, b);
	ft_lstclear(a);
	ft_lstclear(b);
	*/
	return (0);
}

char	*arg_join(int argc, char *argv[])
{
	int	i;
	char	*str;

	i = 1;
	str = NULL;
	while (i < argc)
	{
		str = ft_strjoin(str, argv[i]);
		str = ft_strjoin(str, " ");
		i++;
	}
	return (str);
}

void	error(void)
{
	ft_putstr_fd("Error\n", 1);
	exit();
}

char	*check_input(int argc, char *argv[])
{
	int	i;
	char	*str;
	char	**args;

	str = arg_join(argc, argv);
	args = ft_split(str, ' ');
	free(str);
	i = 0;
	while (args[i] != NULL)
	{
		if (!ft_isdigit(args[i]) || (ft_strlen(args[i]) > 10))
		{
			free_split(args);
			error();
		}
	}
	free_split(args);
}
