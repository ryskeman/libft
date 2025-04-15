/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fernafer <fernafer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 16:02:56 by fernafer          #+#    #+#             */
/*   Updated: 2025/04/15 10:36:01 by fernafer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, char *src, size_t size)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;
	size_t	remaining;

	i = 0;
	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (size <= dst_len)
		return (size + src_len);
	remaining = size - dst_len - 1;
	while (src[i] && i < remaining)
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = '\0';
	return (dst_len + src_len);
}
/*
int	main(void)
{
	char	dst_ft[20];
	char	dst_original[20];
	char	src[] = "mundo!";
	size_t	size;
	size_t	result_ft;
	size_t	result_original;

	// Caso 1: size > dst_len + src_len
	strcpy(dst_ft, "Hola ");
	strcpy(dst_original, "Hola ");
	size = sizeof(dst_ft);
	result_ft = ft_strlcat(dst_ft, src, size);
	result_original = strlcat(dst_original, src, size);
	printf("Caso 1: size > dst_len + src_len\n");
	printf("ft_strlcat:  dst = \"%s\", result = %zu\n", dst_ft, result_ft);
	printf("strlcat:     dst = \"%s\", result = %zu\n", dst_original,
		result_original);
	printf("Comparación: %s, Resultados %s\n\n", strcmp(dst_ft,
			dst_original) == 0 ? "Iguales" : "Diferentes",
		result_ft == result_original ? "Iguales" : "Diferentes");
	// Caso 2: size < dst_len + src_len
	strcpy(dst_ft, "Hola ");
	strcpy(dst_original, "Hola ");
	size = 10;
	result_ft = ft_strlcat(dst_ft, src, size);
	result_original = strlcat(dst_original, src, size);
	printf("Caso 2: size < dst_len + src_len\n");
	printf("ft_strlcat:  dst = \"%s\", result = %zu\n", dst_ft, result_ft);
	printf("strlcat:     dst = \"%s\", result = %zu\n", dst_original,
		result_original);
	printf("Comparación: %s, Resultados %s\n\n", strcmp(dst_ft,
			dst_original) == 0 ? "Iguales" : "Diferentes",
		result_ft == result_original ? "Iguales" : "Diferentes");
	// Caso 3: size == dst_len
	strcpy(dst_ft, "Hola ");
	strcpy(dst_original, "Hola ");
	size = 5;
	result_ft = ft_strlcat(dst_ft, src, size);
	result_original = strlcat(dst_original, src, size);
	printf("Caso 3: size == dst_len\n");
	printf("ft_strlcat:  dst = \"%s\", result = %zu\n", dst_ft, result_ft);
	printf("strlcat:     dst = \"%s\", result = %zu\n", dst_original,
		result_original);
	printf("Comparación: %s, Resultados %s\n\n", strcmp(dst_ft,
			dst_original) == 0 ? "Iguales" : "Diferentes",
		result_ft == result_original ? "Iguales" : "Diferentes");
	// Caso 4: size == 0
	strcpy(dst_ft, "Hola ");
	strcpy(dst_original, "Hola ");
	size = 0;
	result_ft = ft_strlcat(dst_ft, src, size);
	result_original = strlcat(dst_original, src, size);
	printf("Caso 4: size == 0\n");
	printf("ft_strlcat:  dst = \"%s\", result = %zu\n", dst_ft, result_ft);
	printf("strlcat:     dst = \"%s\", result = %zu\n", dst_original,
		result_original);
	printf("Comparación: %s, Resultados %s\n\n", strcmp(dst_ft,
			dst_original) == 0 ? "Iguales" : "Diferentes",
		result_ft == result_original ? "Iguales" : "Diferentes");
	// Caso 5: src es una cadena vacía
	strcpy(dst_ft, "Hola ");
	strcpy(dst_original, "Hola ");
	size = sizeof(dst_ft);
	result_ft = ft_strlcat(dst_ft, "", size);
	result_original = strlcat(dst_original, "", size);
	printf("Caso 5: src es una cadena vacía\n");
	printf("ft_strlcat:  dst = \"%s\", result = %zu\n", dst_ft, result_ft);
	printf("strlcat:     dst = \"%s\", result = %zu\n", dst_original,
		result_original);
	printf("Comparación: %s, Resultados %s\n\n", strcmp(dst_ft,
			dst_original) == 0 ? "Iguales" : "Diferentes",
		result_ft == result_original ? "Iguales" : "Diferentes");
	return (0);
}
*/
