/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fernafer <fernafer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 16:02:56 by fernafer          #+#    #+#             */
/*   Updated: 2025/04/14 16:25:26 by fernafer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, char *src, size_t size)
{
	size_t	dest_len;
	size_t	source_len;

	dest_len = ft_strlen(dst);
	source_len = ft_strlen(src);
	if (size <= 0)
		return (source_len);
	if (size <= dest_len)
		return (size + source_len);
	ft_strlcpy(dst, src, size);
	return (dest_len + source_len);
}
/*
int	main(void)
{
	char	primera[6] = "Hola ";
	char	segunda[] = "mundo!";
	char	cuarta[6] = "Hola ";
	char	tercera[] = "mundo!";

	printf("Función original: %s\n %lu\n", primera, strlcat(primera, segunda,
			sizeof(primera)));
	printf("Función propia: %s\n %lu\n", primera, ft_strlcat(primera, segunda,
			sizeof(primera)));
	printf("Función original: %s\n %lu\n", cuarta, strlcat(cuarta, tercera,
			sizeof(cuarta)));
	printf("Función propia: %s\n %lu\n", cuarta, ft_strlcat(cuarta, tercera,
			sizeof(cuarta)));
	return (0);
}
*/
