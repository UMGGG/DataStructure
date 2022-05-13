/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_linked_list.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeyjeon <@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 00:53:15 by jaeyjeon          #+#    #+#             */
/*   Updated: 2022/05/13 16:46:49 by jaeyjeon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_linked_list.h"

t_list	*ft_create_list(t_node *node)
{
	t_list	*list;

	list = malloc(sizeof(t_list));
	if (!list)
		return (NULL);
	list->head = node;
	list->nodescount++;
	return (list);
}

t_node	*ft_create_node(int data)
{
	t_node	*newnode;

	newnode = malloc(sizeof(t_node));
	if (!newnode)
		return (NULL);
	newnode->data = data;
	newnode->next = NULL;
	return (newnode);
}

void	ft_print_list(t_list *list)
{
	t_node	*currnode;

	currnode = list->head;
	while (currnode != NULL)
	{
		printf("%d->", currnode->data);
		currnode = currnode->next;
	}
	printf ("\n");
}

void	ft_count_node_in_list(t_list *list)
{
	printf("node : %d\n", list->nodescount);
}

int	main()
{
	t_list	*list;

	list = ft_create_list(ft_create_node(0));
	ft_push(10, list);
	ft_push(20, list);
	ft_push(30, list);
	ft_push(40, list);
	ft_pop(list);
	ft_print_list(list);
	ft_count_node_in_list(list);
	return (0);
}
