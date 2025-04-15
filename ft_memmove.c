/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fernafer <fernafer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 17:16:21 by fernafer          #+#    #+#             */
/*   Updated: 2025/04/15 09:46:01 by fernafer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*d;
	const unsigned char	*s;
	size_t				i;

	d = (unsigned char *)dst;
	s = (const unsigned char *)src;
	if (dst == src || len == 0)
		return (dst);
	if (d > s)
	{
		while (len--)
			d[len] = s[len];
	}
	else
	{
		i = 0;
		while (len--)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (dst);
}
/*
int	main(void) {
	char	str1[] = "Hola, mundo!";
	char	str2[] = "Hola, mundo!";
	char	str3[] = "Hola, mundo!";
	char	str4[] = "Hola, mundo!";

	// Prueba 1: Solapamiento dst > src
	ft_memmove(str1 + 2, str1, 10);
	memmove(str2 + 2, str2, 10);
	printf("Prueba 1 (dst > src): ft_memmove = %s, memmove = %s\n", str1, str2);

	// Prueba 2: Solapamiento dst < src
	ft_memmove(str3, str3 + 5, 6);
	memmove(str4, str4 + 5, 6);
	printf("Prueba 2 (dst < src): ft_memmove = %s, memmove = %s\n", str3, str4);

	// Prueba 3: Sin solapamiento
	char	str5[] = "abcdefghij";
	char	str6[] = "abcdefghij";
	ft_memmove(str5 + 5, str5, 5);
	memmove(str6 + 5, str6, 5);
	printf("Prueba 3 (sin solapamiento): ft_memmove = %s, memmove = %s\n", str5,
		str6);

	// Prueba 4: len = 0
	char	str7[] = "abcdefghij";
	char	str8[] = "abcdefghij";
	ft_memmove(str7 + 2, str7, 0);
	memmove(str8 + 2, str8, 0);
	printf("Prueba 4 (len = 0): ft_memmove = %s, memmove = %s\n", str7, str8);

	// Prueba 5: dst == src
	char	str9[] = "abcdefghij";
	char	str10[] = "abcdefghij";
	ft_memmove(str9, str9, 5);
	memmove(str10, str10, 5);
	printf("Prueba 5 (dst == src): ft_memmove = %s, memmove = %s\n", str9,
		str10);

	return (0);
}
*/
