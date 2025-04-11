/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fernafer <fernafer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 20:18:28 by fernafer          #+#    #+#             */
/*   Updated: 2025/04/11 21:12:15 by fernafer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;
	size_t				i;

	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	if (dest == NULL && src == NULL)
		return (dest);
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}
/*
int	main(void)
{
	char	*src;
	char	dest_ft[20];
	char	dest_original[20];
	size_t	size;

	src = "Hola mundo";
	size = strlen(src) + 1;
	memset(dest_ft, 'A', sizeof(dest_ft));
	memset(dest_original, 'B', sizeof(dest_original));
	ft_memcpy(dest_ft, src, size);
	memcpy(dest_original, src, size);
	if (memcmp(dest_ft, dest_original, size) == 0)
		printf("Los buffers son iguales.\n");
	else
		printf("Los buffers son diferentes.\n");
	printf("ft_memcpy: %s\n", dest_ft);
	printf("memcpy:  %s\n", dest_original);
	return (0);
}
*/