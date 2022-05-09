/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_linked_list.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeyjeon <@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 00:53:15 by jaeyjeon          #+#    #+#             */
/*   Updated: 2022/05/10 00:13:19 by jaeyjeon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_linked_list.h"

void	ft_push(t_node *newnode, t_node *head)
{
	t_node	*savenode;

	savenode = head;
	while (savenode->next != NULL)
		savenode = savenode->next;
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
	return (newnode);
}

void	ft_pop(t_node *head)
{
	t_node	*savenode;

	savenode = head;
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
}

int	main()
{
	t_node	*head;
	t_node	*currnode;

	head = ft_create_node(0);
	currnode = head;
	ft_pop(head);
	while (currnode != NULL)
	{
		printf("%d ", currnode->data);
		currnode = currnode->next;
	}
	return (0);
}
