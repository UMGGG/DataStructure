/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_linked_list.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeyjeon <@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 00:53:12 by jaeyjeon          #+#    #+#             */
/*   Updated: 2022/05/25 00:21:16 by jaeyjeon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LINKED_LIST_H
# define FT_LINKED_LIST_H

# include <stdlib.h>
# include <stdio.h>

typedef struct s_node{
	struct s_node	*next;
	int				data;
}			t_node;

typedef struct s_list{
	t_node	*head;
	int		nodescount;
}			t_list;

void	ft_push(int data, t_list *list);
void	ft_pop(t_list *list);
void	ft_print_list(t_list *list);
void	ft_count_node_in_list(t_list *list);
t_node	*ft_create_node(int data);
t_list	*ft_create_list(t_node *node);

#endif
