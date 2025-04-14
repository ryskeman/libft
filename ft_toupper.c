/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fernafer <fernafer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 18:34:11 by fernafer          #+#    #+#             */
/*   Updated: 2025/04/14 10:43:20 by fernafer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}
/*
int	main(void)
{
	int	c = 'C';
	int	d = 'd';

	printf ("Con mi funcion: %c -> %c\n",c ,ft_toupper(c));
	printf ("Con la original: %c -> %c\n",c ,toupper(c));
	printf ("Mi funcion: %c -> %c\n",d ,ft_toupper(d));
	printf ("Original: %c - > %c\n",d ,toupper(d));

	return (0);
}
*/
