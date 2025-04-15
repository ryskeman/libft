/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fernafer <fernafer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 11:23:43 by fernafer          #+#    #+#             */
/*   Updated: 2025/04/15 12:27:26 by fernafer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (unsigned char)c)
			return ((char *)&s[i]);
		i++;
	}
	if ((unsigned char)c == '\0')
		return ((char *)&s[i]);
	return (0);
}
/*
int	main(void)
{
	char	cadena[] = "Hola, mundo!";
	char	caracter_a_buscar;
	char	*resultado_ft;
	char	*resultado_original;

	caracter_a_buscar = 'm';
	// Buscar el carácter 'm'
	resultado_ft = ft_strchr(cadena, caracter_a_buscar);
	resultado_original = strchr(cadena, caracter_a_buscar);
	printf("Cadena: \"%s\"\n", cadena);
	printf("Carácter buscado: '%c'\n", caracter_a_buscar);
	printf("ft_strchr: %p\n", resultado_ft);
	printf("strchr:    %p\n", resultado_original);
	if (resultado_ft == resultado_original)
	{
		printf("Resultados iguales\n");
	}
	else
	{
		printf("Resultados diferentes\n");
	}
	// Buscar el carácter '\0'
	resultado_ft = ft_strchr(cadena, '\0');
	resultado_original = strchr(cadena, '\0');
	printf("\nCarácter buscado: '\\0'\n");
	printf("ft_strchr: %p\n", resultado_ft);
	printf("strchr:    %p\n", resultado_original);
	if (resultado_ft == resultado_original)
	{
		printf("Resultados iguales\n");
	}
	else
	{
		printf("Resultados diferentes\n");
	}
	// Buscar un carácter que no existe
	caracter_a_buscar = 'z';
	resultado_ft = ft_strchr(cadena, caracter_a_buscar);
	resultado_original = strchr(cadena, caracter_a_buscar);
	printf("\nCarácter buscado: '%c'\n", caracter_a_buscar);
	printf("ft_strchr: %s\n", resultado_ft);
	printf("strchr:    %s\n", resultado_original);
	if (resultado_ft == resultado_original)
	{
		printf("Resultados iguales\n");
	}
	else
	{
		printf("Resultados diferentes\n");
	}
	return (0);
}*/
