/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akeawdou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 21:15:11 by akeawdou          #+#    #+#             */
/*   Updated: 2023/03/25 10:40:54 by akeawdou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>

typedef struct s_list
{
	int	val;
	int	idx;
	struct s_list	*next;
}	t_list;

int		main(int argc, char *argv[]);
void	error();
int		is_sorted(t_list **stack);

long	ft_atoi(const char *str);
int		ft_isdigit(int c);
char	**ft_split(char *s, char c);
size_t	ft_strlen(const char *s);
int		ft_putstr_fd(char *str, int fd);
char	*ft_strtrim(char *s1, char *set);
char	**ft_strpjoin(char **s1, char **s2);
char	**ft_strpjoin_free(char **s1, char **s2);
char	*ft_strdup(const char *s);
void	free_split(char **str);

t_list	*ft_lstnew(int content);
t_list	*ft_lstlast(t_list *lst);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstclear(t_list **stack);
int		ft_lstsize(t_list *lst);

int		pa(t_list **a, t_list **b, int i);
int		pb(t_list **a, t_list **b, int i);
int		ra(t_list **a, int i);
int		rb(t_list **b, int i);
int		rr(t_list **a, t_list **b, int i);
int		rra(t_list **a, int i);
int		rrb(t_list **b, int i);
int		rrr(t_list **a, t_list **b, int i);
int		sa(t_list **a, int i);
int		sb(t_list **b, int i);
int		ss(t_list **a, t_list **b, int i);


#endif
