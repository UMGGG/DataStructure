/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_linked_list_stack.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeyjeon <@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 22:39:31 by jaeyjeon          #+#    #+#             */
/*   Updated: 2022/05/17 22:24:30 by jaeyjeon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_linked_list.h"

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

void	ft_push(int data, t_list *list)
{
	t_node	*savenode;

	savenode = list->head;
	while (savenode->next != NULL)
		savenode = savenode->next;
	savenode->next = ft_create_node(data);
	list->nodescount++;
}
