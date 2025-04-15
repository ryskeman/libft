/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fernafer <fernafer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 16:06:14 by fernafer          #+#    #+#             */
/*   Updated: 2025/04/15 09:45:44 by fernafer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	src_len;
	size_t	i;

	src_len = 0;
	i = 0;
	while (src[src_len])
		src_len++;
	if (size != 0)
	{
		while (src[i] && i < (size - 1))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (src_len);
}
/*
int	main(void)
{
	char	*src;
	char	dst_ft[20];
	char	dst_original[20];
	size_t	size;
	size_t	result_ft;
	size_t	result_original;

	src = "Hola, mundo!";
	size = 10;
	// Caso 1: size < strlen(src)
	memset(dst_ft, 'A', sizeof(dst_ft));
	// Inicializa para detectar posibles errores
	memset(dst_original, 'A', sizeof(dst_original));
	result_ft = ft_strlcpy(dst_ft, src, size);
	result_original = strlcpy(dst_original, src, size);
	printf("Caso 1: size < strlen(src)\n");
	printf("ft_strlcpy:  dst = \"%s\", result = %zu\n", dst_ft, result_ft);
	printf("strlcpy:     dst = \"%s\", result = %zu\n", dst_original,
		result_original);
	printf("Comparación: %s, Resultados %s\n", strcmp(dst_ft,
			dst_original) == 0 ? "Iguales" : "Diferentes",
		result_ft == result_original ? "Iguales" : "Diferentes");
	// Caso 2: size > strlen(src)
	size = 20;
	memset(dst_ft, 'B', sizeof(dst_ft));
	memset(dst_original, 'B', sizeof(dst_original));
	result_ft = ft_strlcpy(dst_ft, src, size);
	result_original = strlcpy(dst_original, src, size);
	printf("\nCaso 2: size > strlen(src)\n");
	printf("ft_strlcpy:  dst = \"%s\", result = %zu\n", dst_ft, result_ft);
	printf("strlcpy:     dst = \"%s\", result = %zu\n", dst_original,
		result_original);
	printf("Comparación: %s, Resultados %s\n", strcmp(dst_ft,
			dst_original) == 0 ? "Iguales" : "Diferentes",
		result_ft == result_original ? "Iguales" : "Diferentes");
	// Caso 3: size = 0
	size = 0;
	memset(dst_ft, 'C', sizeof(dst_ft));
	memset(dst_original, 'C', sizeof(dst_original));
	result_ft = ft_strlcpy(dst_ft, src, size);
	result_original = strlcpy(dst_original, src, size);
	printf("\nCaso 3: size = 0\n");
	printf("ft_strlcpy:  dst = \"%s\", result = %zu\n", dst_ft, result_ft);
	printf("strlcpy:     dst = \"%s\", result = %zu\n", dst_original,
		result_original);
	printf("Comparación: %s, Resultados %s\n", strcmp(dst_ft,
			dst_original) == 0 ? "Iguales" : "Diferentes",
		result_ft == result_original ? "Iguales" : "Diferentes");
	// Caso 4: size = 1
	size = 1;
	memset(dst_ft, 'D', sizeof(dst_ft));
	memset(dst_original, 'D', sizeof(dst_original));
	result_ft = ft_strlcpy(dst_ft, src, size);
	result_original = strlcpy(dst_original, src, size);
	printf("\nCaso 4: size = 1\n");
	printf("ft_strlcpy:  dst = \"%s\", result = %zu\n", dst_ft, result_ft);
	printf("strlcpy:     dst = \"%s\", result = %zu\n", dst_original,
		result_original);
	printf("Comparación: %s, Resultados %s\n", strcmp(dst_ft,
			dst_original) == 0 ? "Iguales" : "Diferentes",
		result_ft == result_original ? "Iguales" : "Diferentes");
	return (0);
}
*/
