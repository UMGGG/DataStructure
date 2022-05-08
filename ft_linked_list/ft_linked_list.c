/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_linked_list.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeyjeon <@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 00:53:15 by jaeyjeon          #+#    #+#             */
/*   Updated: 2022/05/08 16:32:55 by jaeyjeon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_linked_list.h"

void	ft_push(t_node *newnode, t_node *head)
{
	t_node	*savenode;

	savenode = head;
	while (savenode->next != NULL)
		savenode = savenode->next;
	newnode->prev = savenode;
	savenode->next = newnode;
}

t_node	*ft_create_node(int data)
{
	t_node	*newnode;

	newnode = malloc(sizeof(t_node));
	if (!newnode)
		return (NULL);
	newnode->data = data;
	newnode->next = NULL;
	newnode->prev = NULL;
	return (newnode);
}

int	main()
{
	t_node	*head;
	t_node	*currnode;

	head = ft_create_node(0);
	currnode = head;
	ft_push(ft_create_node(10), head);
	ft_push(ft_create_node(20), head);
	ft_push(ft_create_node(30), head);
	while (currnode != NULL)
	{
		printf("%d ", currnode->data);
		currnode = currnode->next;
	}
	return (0);
}
