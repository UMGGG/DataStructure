/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_linked_list.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeyjeon <@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 00:53:12 by jaeyjeon          #+#    #+#             */
/*   Updated: 2022/05/09 23:58:12 by jaeyjeon         ###   ########.fr       */
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

void	ft_push(t_node *newnode, t_node *head);
void	ft_pop(t_node *head);
t_node	*ft_create_node(int data);

#endif
