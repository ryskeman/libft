/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fernafer <fernafer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 10:34:10 by fernafer          #+#    #+#             */
/*   Updated: 2025/04/19 14:58:29 by fernafer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*s_copy;
	size_t	s_size;

	s_size = ft_strlen(s);
	s_copy = malloc(s_size + 1);
	if (s_copy == NULL)
		return (NULL);
	ft_memcpy(s_copy, s, s_size + 1);
	return (s_copy);
}
/*
int	main(void)
{
	char	*original;
	char	*duplicado;
	char	*original2;
	char	*duplicado2;
	char	*original3;
	char	*duplicado3;
	char	*duplicado4;

	original = "Hola mundo!";
	duplicado = ft_strdup(original);
	if (duplicado)
		printf("Original: \"%s\"\nDuplicado: \"%s\"\n", original, duplicado);
	else
		printf("Error: ft_strdup devolvió NULL\n");
	free(duplicado);
	original2 = "";
	duplicado2 = ft_strdup(original2);
	if (duplicado2)
		printf("Original: \"%s\"\nDuplicado: \"%s\"\n", original2, duplicado2);
	else
		printf("Error: ft_strdup devolvió NULL para cadena vacía\n");
	free(duplicado2);
	original3 = "Línea1\nLínea2\t\t♥";
	duplicado3 = ft_strdup(original3);
	if (duplicado)
		printf("Original: \"%s\"\nDuplicado: \"%s\"\n", original3, duplicado3);
	else
		printf("Error: ft_strdup devolvió NULL\n");
	free(duplicado3);
	duplicado4 = ft_strdup(NULL);
	if (duplicado4 == NULL)
	printf("✔ ft_strdup devolvió NULL como se esperaba para entrada NULL.\n");
	else
	{
		printf("✘ Error: Se esperaba NULL, pero se obtuvo: %s\n", duplicado4);
		free(duplicado4);
	}
}
*/
