/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fernafer <fernafer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 18:54:37 by fernafer          #+#    #+#             */
/*   Updated: 2025/04/14 16:06:53 by fernafer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*ptr;

	i = 0;
	ptr = (unsigned char *)s;
	while (i < n)
		ptr[i++] = (unsigned char)c;
	return (s);
}
/*
int	main(void)
{
	// *** Definición del caso de prueba ***
	char	buffer_orig[20] = "abcdefghijklmnopqr";
	char	buffer_tu[20] = "abcdefghijklmnopqr";
	int	valor_llenado = 'X';
	size_t	num_bytes = 10;

	// *** Ejecución de las funciones ***
	memset(buffer_orig, valor_llenado, num_bytes);
	ft_memset(buffer_tu, valor_llenado, num_bytes);

	// *** Comparación de los resultados ***
	if (memcmp(buffer_orig, buffer_tu, sizeof(buffer_orig)) == 0)
	{
		printf("[OK] ft_memset('%c', %zu bytes) coincide con memset.\n",
			valor_llenado, num_bytes);
		printf("Resultado: %s\n", buffer_tu);
	}
	else
	{
		printf("[FALLA] ft_memset('%c', %zu bytes) NO coincide con memset.\n",
			valor_llenado, num_bytes);
		printf("memset resultado: %s\n", buffer_orig);
		printf("ft_memset resultado: %s\n", buffer_tu);
	}

	return (0);
}
*/
