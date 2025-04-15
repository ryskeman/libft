/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fernafer <fernafer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 12:30:45 by fernafer          #+#    #+#             */
/*   Updated: 2025/04/15 12:54:41 by fernafer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	s_len;

	s_len = ft_strlen(s);
	if ((unsigned char)c == '\0')
		return ((char *)&s[s_len]);
	while (s_len--)
	{
		if (s[s_len] == (unsigned char)c)
			return ((char *)&s[s_len]);
	}
	return (0);
}
/*
int	main(void)
{
	char cadena[] = "Hola, mundo! oHola";
	char caracter_a_buscar = 'o';
	char *resultado_ft;
	char *resultado_original;

	// Buscar la última aparición del carácter 'o'
	resultado_ft = ft_strrchr(cadena, caracter_a_buscar);
	resultado_original = strrchr(cadena, caracter_a_buscar);

	printf("Cadena: \"%s\"\n", cadena);
	printf("Carácter buscado: '%c'\n", caracter_a_buscar);

	printf("ft_strrchr: %p\n", resultado_ft);
	printf("strrchr:    %p\n", resultado_original);

	if (resultado_ft == resultado_original) {
		printf("Resultados iguales\n");
	} else {
		printf("Resultados diferentes\n");
	}

	// Buscar el carácter '\0'
	resultado_ft = ft_strrchr(cadena, '\0');
	resultado_original = strrchr(cadena, '\0');

	printf("\nCarácter buscado: '\\0'\n");

	printf("ft_strrchr: %p\n", resultado_ft);
	printf("strrchr:    %p\n", resultado_original);

	if (resultado_ft == resultado_original) {
		printf("Resultados iguales\n");
	} else {
		printf("Resultados diferentes\n");
	}

	// Buscar un carácter que no existe
	caracter_a_buscar = 'z';
	resultado_ft = ft_strrchr(cadena, caracter_a_buscar);
	resultado_original = strrchr(cadena, caracter_a_buscar);

	printf("\nCarácter buscado: '%c'\n", caracter_a_buscar);

	printf("ft_strrchr: %p\n", resultado_ft);
	printf("strrchr:    %p\n", resultado_original);

	if (resultado_ft == resultado_original) {
		printf("Resultados iguales\n");
	} else {
		printf("Resultados diferentes\n");
	}

	return (0);
}*/
