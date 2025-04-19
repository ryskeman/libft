/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fernafer <fernafer@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 20:39:59 by fernafer          #+#    #+#             */
/*   Updated: 2025/04/20 00:46:36 by fernando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*aux;

	if (!lst)
		return (NULL);
	aux = lst;
	while (aux->next)
		aux = aux->next;
	return (aux);
}
