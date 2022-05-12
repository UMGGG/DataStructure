/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_linked_list.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeyjeon <@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 00:53:15 by jaeyjeon          #+#    #+#             */
/*   Updated: 2022/05/12 22:34:23 by jaeyjeon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_linked_list.h"

void	ft_push(t_node *newnode, t_list	*list)
{
	t_node	*savenode;

	savenode = list->head;
	while (savenode->next != NULL)
		savenode = savenode->next;
	savenode->next = newnode;
	list->nodescount++;
}

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

void	ft_pop(t_list *list)
{
	t_node	*savenode;

	savenode = list->head;
	if (savenode == NULL)
		return ;
	else if (savenode->next == NULL)
		free(savenode);
	else
	{
		while (savenode->next->next != NULL)
			savenode = savenode->next;
		free(savenode->next);
		savenode->next = NULL;
	}
	list->nodescount--;
}

void	ft_print_list(t_list *list)
{
	t_node	*currnode;

	currnode = list->head;
	while (currnode != NULL)
	{
		printf("%d ", currnode->data);
		currnode = currnode->next;
	}
}

int	main()
{
	t_list	*list;

	list = ft_create_list(ft_create_node(0));
	ft_push(ft_create_node(10), list);
	ft_push(ft_create_node(20), list);
	ft_push(ft_create_node(30), list);
	ft_push(ft_create_node(40), list);
	ft_pop(list);
	ft_print_list(list);
	return (0);
}
