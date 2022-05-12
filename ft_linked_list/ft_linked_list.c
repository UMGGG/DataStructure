/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_linked_list.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeyjeon <@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 00:53:15 by jaeyjeon          #+#    #+#             */
/*   Updated: 2022/05/12 22:21:28 by jaeyjeon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_linked_list.h"

void	ft_push(t_node *newnode, t_list	list)
{
	t_node	*savenode;

	savenode = list.head;
	while (savenode->next != NULL)
		savenode = savenode->next;
	savenode->next = newnode;
	list.nodescount++;
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

void	ft_pop(t_list list)
{
	t_node	*savenode;

	savenode = list.head;
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
	list.nodescount--;
}

int	main()
{
	t_list	list;
	t_node	*currnode;

	list.head = ft_create_node(0);
	list.nodescount++;
	currnode = list.head;
	while (currnode != NULL)
	{
		printf("%d ", currnode->data);
		currnode = currnode->next;
	}
	return (0);
}
