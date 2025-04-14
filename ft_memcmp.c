/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fernafer <fernafer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 12:00:00 by fernafer          #+#    #+#             */
/*   Updated: 2025/04/14 14:20:10 by fernafer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*p1;
	const unsigned char	*p2;
	size_t				i;

	p1 = (const unsigned char *)s1;
	p2 = (const unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (p1[i] != p2[i])
			return (p1[i] - p2[i]);
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	char	str1[] = "Hola";
	char	str2[] = "Hola";
	char	str3[] = "Holb";
	char	str4[] = "Hol";
	int		result_ft;
	int		result_std;

	// Caso 1: Cadenas iguales
	result_ft = ft_memcmp(str1, str2, 4);
	result_std = memcmp(str1, str2, 4);
	printf("Comparando \"%s\" y \"%s\" (4 bytes): Resultado ft_memcmp = %d, \
    memcmp = %d\n", str1, str2, result_ft, result_std);
	// Caso 2: Cadenas diferentes en el tercer byte
	result_ft = ft_memcmp(str1, str3, 4);
	result_std = memcmp(str1, str3, 4);
	printf("Comparando \"%s\" y \"%s\" (4 bytes): Resultado ft_memcmp = %d, \
    memcmp = %d\n", str1, str3, result_ft, result_std);
	// Caso 3: Comparando solo los primeros 3 bytes (son iguales)
	result_ft = ft_memcmp(str1, str4, 3);
	result_std = memcmp(str1, str4, 3);
	printf("Comparando \"%s\" y \"%s\" (3 bytes): Resultado ft_memcmp = %d, \
    memcmp = %d\n", str1, str4, result_ft, result_std);
	// Caso 4: Comparando más bytes de los que tiene la segunda cadena
	result_ft = ft_memcmp(str1, str4, 4);
	result_std = memcmp(str1, str4, 4);
	printf("Comparando \"%s\" y \"%s\" (4 bytes): Resultado ft_memcmp = %d, \
    memcmp = %d\n", str1, str4, result_ft, result_std);
	return (0);
}
*/
