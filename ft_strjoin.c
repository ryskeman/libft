/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fernafer <fernafer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 14:00:29 by fernafer          #+#    #+#             */
/*   Updated: 2025/04/16 15:18:58 by fernafer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_generate_space(size_t len)
{
	return ((char *)malloc(len * sizeof(char)));
}

static char	*ft_join_string(char const *s1, char const *s2, size_t i, size_t j)
{
	size_t	s1_len;
	size_t	s2_len;
	char	*new_str;

	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	new_str = ft_generate_space(s1_len + s2_len + 1);
	if (!new_str)
		return (NULL);
	while (i < s1_len + s2_len)
	{
		if (i < s1_len)
			new_str[i] = s1[i];
		else
		{
			new_str[i] = s2[j];
			j++;
		}
		i++;
	}
	new_str[i] = '\0';
	return (new_str);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s2_copy;
	char	*s1_copy;

	if (!s1 && !s2)
		return (ft_strdup(""));
	if (!s1)
	{
		s2_copy = ft_generate_space(ft_strlen(s2) + 1);
		if (!s2_copy)
			return (NULL);
		return (ft_memcpy(s2_copy, s2, ft_strlen(s2) + 1));
	}
	else if (!s2)
	{
		s1_copy = ft_generate_space(ft_strlen(s1) + 1);
		if (!s1_copy)
			return (NULL);
		return (ft_memcpy(s1_copy, s1, ft_strlen(s1) + 1));
	}
	else
		return (ft_join_string(s1, s2, 0, 0));
}
/*
int	main(void)
{
	char		*result;
	const char	*str1 = "Hola, ";
	const char	*str2 = "mundo!";
	const char	*str3 = "Esto es";
	const char	*str4 = "";
	const char	*str5 = NULL;
	const char	*str6 = "mundo";
	const char	*str7 = "Hola";
	const char	*str8 = NULL;
	const char	*str9 = NULL;
	const char	*str10 = NULL;

	// Caso 1: Concatenar dos strings normales
	result = ft_strjoin(str1, str2);
	if (result)
	{
		printf("Caso 1: \"%s\" + \"%s\" = \"%s\"\n", str1, str2, result);
		free(result);
	}
	else
	{
		printf("Error en la concatenación (Caso 1)\n");
	}
	printf("\n");
	// Caso 2: Concatenar con una cadena vacía
	result = ft_strjoin(str3, str4);
	if (result)
	{
		printf("Caso 2: \"%s\" + \"%s\" = \"%s\"\n", str3, str4, result);
		free(result);
	}
	else
	{
		printf("Error en la concatenación (Caso 2)\n");
	}
	printf("\n");
	// Caso 3: El primer string es NULL
	result = ft_strjoin(str5, str6);
	if (result)
	{
		printf("Caso 3: NULL + \"%s\" = \"%s\"\n", str6, result);
		free(result);
	}
	else
	{
		printf("Error en la concatenación (Caso 3)\n");
	}
	printf("\n");
	// Caso 4: El segundo string es NULL
	result = ft_strjoin(str7, str8);
	if (result)
	{
		printf("Caso 4: \"%s\" + NULL = \"%s\"\n", str7, result);
		free(result);
	}
	else
	{
		printf("Error en la concatenación (Caso 4)\n");
	}
	printf("\n");
	// Caso 5: Ambos strings son NULL
	result = ft_strjoin(str9, str10);
	if (result)
	{
		printf("Caso 5: NULL + NULL = \"%s\"\n", result);
		free(result);
	}
	else
	{
		printf("Error en la concatenación (Caso 5)\n");
	}
	printf("\n");
	return (0);
}

*/
