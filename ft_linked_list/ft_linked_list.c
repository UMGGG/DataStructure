/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_linked_list.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeyjeon <@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 00:53:15 by jaeyjeon          #+#    #+#             */
/*   Updated: 2022/05/07 01:15:55 by jaeyjeon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_linked_list.h"

void	add_new_node(int data, t_node node)
{
	t_node	*newnode;
	t_node	*savenode;

	newnode = malloc(sizeof(t_node));
	if (!newnode)
		return (0);
	newnode->data = data;
	if (node.next == NULL)
		node.next = newnode;
	else
		savenode = node.next;
		node.next = newnode;
		newnode->next = savenode;
}
