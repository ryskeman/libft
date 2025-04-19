/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fernafer <fernafer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 15:12:18 by fernafer          #+#    #+#             */
/*   Updated: 2025/04/19 15:24:10 by fernafer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_node;

	new_node = malloc(sizeof(t_list));
	if (!new_node)
		return (NULL);
	new_node->content = content;
	new_node->next = NULL;
	return (new_node);
}
/*
int	main(void)
{
	int		*num1;
	char	*str1;
	t_list	*node1;
	t_list	*node2;

	num1 = malloc(sizeof(int));
	if (num1)
		*num1 = 10;
	str1 = ft_strdup("Hola");
	// Crear nuevos nodos usando ft_lstnew
	node1 = ft_lstnew(num1);
	node2 = ft_lstnew(str1);
	t_list *node3 = ft_lstnew(NULL);
	printf("Nodo 1 content (int): %d\n", *(int *)node1->content);
	printf("Nodo 2 content (string): %s\n", (char *)node2->content);
	printf("Nodo 3 content (NULL): %p\n", node3->content);
	printf("Nodo 1 next: %p\n", node1->next);
	printf("Nodo 2 next: %p\n", node2->next);
	printf("Nodo 3 next: %p\n", node3->next);
	free(num1);
	free(str1);
	free(node1);
	free(node2);
	free(node3);
	return (0);
}
*/
