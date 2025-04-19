/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fernafer <fernafer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 12:10:13 by fernafer          #+#    #+#             */
/*   Updated: 2025/04/19 15:29:23 by fernafer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	s_len;
	size_t	i;
	char	*sub;

	s_len = ft_strlen(s);
	i = 0;
	if (start >= s_len)
		return (ft_strdup(""));
	if (len > s_len - start)
		len = s_len - start;
	sub = malloc((len + 1) * sizeof(char));
	if (!sub)
		return (NULL);
	while (s[start] && i < len)
	{
		sub[i] = s[start];
		start++;
		i++;
	}
	sub[i] = '\0';
	return (sub);
}
/*
int	main(void)
{
	const char	*original = "Hola mundo!";
	char		*substring;

	// Prueba 1: Substring desde el índice 5 de longitud 6
	substring = ft_substr(original, 5, 6);
	if (substring)
	{
		printf("Substring 1: \"%s\"\n", substring);
		free(substring);
	}
	else
	{
		printf("Error al obtener la substring 1\n");
	}
	printf("\n");
	// Prueba 2: Substring desde el inicio de longitud 4
	substring = ft_substr(original, 0, 4);
	if (substring)
	{
		printf("Substring 2: \"%s\"\n", substring);
		free(substring);
	}
	else
	{
		printf("Error al obtener la substring 2\n");
	}
	printf("\n");
	// Prueba 3: start fuera de rango
	substring = ft_substr(original, 20, 5);
	if (substring)
	{
		printf("Substring 3 (start fuera de rango): \"%s\"\n", substring);
		free(substring);
	}
	else
	{
		printf("Error al obtener la substring 3\n");
	}
	return (0);
}
*/
