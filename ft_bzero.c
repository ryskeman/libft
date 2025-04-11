/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fernafer <fernafer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 19:14:42 by fernafer          #+#    #+#             */
/*   Updated: 2025/04/11 20:18:14 by fernafer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*p;
	size_t			i;

	i = 0;
	p = (unsigned char *)s;
	while (i < n)
	{
		*p = 0;
		p++;
		i++;
	}
}
/*
int	main(void)
{
	char	buffer_ft[20];
	char	buffer_original[20];
	size_t	size;

	size = sizeof(buffer_ft);
	for (size_t i = 0; i < size; i++)
	{
		buffer_ft[i] = 'A';
		buffer_original[i] = 'A';
	}
	ft_bzero(buffer_ft, size);
	bzero(buffer_original, size);
	if (memcmp(buffer_ft, buffer_original, size) == 0)
		printf("Los buffers son iguales.\n");
	else
		printf("Los buffers son diferentes.\n");
	return (0);
}
*/