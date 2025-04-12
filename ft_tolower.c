/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fernafer <fernafer@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 19:02:06 by fernafer          #+#    #+#             */
/*   Updated: 2025/04/12 19:06:00 by fernando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}
/*
int     main(void)
{
        int     c = 'C';
        int     d = 'd';

        printf ("Con mi funcion: %c -> %c\n",c ,ft_tolower(c));
        printf ("Con la original: %c -> %c\n",c ,tolower(c));
        printf ("Mi funcion: %c -> %c\n",d ,ft_tolower(d));
        printf ("Original: %c - > %c\n",d ,tolower(d));

        return (0);
}
*/
