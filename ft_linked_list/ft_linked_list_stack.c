/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_linked_list_stack.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeyjeon <@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 22:39:31 by jaeyjeon          #+#    #+#             */
/*   Updated: 2022/05/12 22:39:59 by jaeyjeon         ###   ########.fr       */
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

void	ft_push(t_node *newnode, t_list	*list)
{
	t_node	*savenode;

	savenode = list->head;
	while (savenode->next != NULL)
		savenode = savenode->next;
	savenode->next = newnode;
	list->nodescount++;
}
