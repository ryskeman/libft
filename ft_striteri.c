/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fernafer <fernafer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 12:04:07 by fernafer          #+#    #+#             */
/*   Updated: 2025/04/19 12:50:49 by fernafer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (s && f)
	{
		i = 0;
		while (s[i])
		{
			f(i, &s[i]);
			i++;
		}
	}
}
/*
// Función de prueba: Convierte a mayúsculas los caracteres en índices pares
static void	ft_to_upper_if_even_index(unsigned int index, char *c)
{
	if (index % 2 == 0 && *c >= 'a' && *c <= 'z')
		*c = *c - 32;
}

// Función de prueba: Añade 1 a cada carácter (si es alfabético)
static void	ft_add_one(unsigned int index, char *c)
{
	(void)index; // No usamos el índice en esta función
	if ((*c >= 'a' && *c < 'z') || (*c >= 'A' && *c < 'Z'))
		(*c)++;
	else if (*c == 'z')
		*c = 'a';
	else if (*c == 'Z')
		*c = 'A';
}

int	main(void)
{
	char	str1[] = "hello";
	char	str2[] = "world";
	char	str3[] = "a1b2c";
	char	str4[] = "";
	char	*str5;
	char	str6[] = "test";

	str5 = NULL;
	printf("--- Test 1: Convertir a mayúsculas en índices pares ---\n");
	printf("Original: %s\n", str1);
	ft_striteri(str1, ft_to_upper_if_even_index);
	printf("Resultado: %s\n", str1);
	if (strcmp(str1, "Hello") == 0)
		printf("[FALLO]\n");
	else
		printf("[OK]\n");
	printf("\n");
	printf("--- Test 2: Añadir 1 a cada carácter ---\n");
	printf("Original: %s\n", str2);
	ft_striteri(str2, ft_add_one);
	printf("Resultado: %s\n", str2);
	if (strcmp(str2, "xpsme") == 0)
		printf("[OK]\n");
	else
		printf("[FALLO]\n");
	printf("\n");
	printf("--- Test 3: Combinación de letras y números ---\n");
	printf("Original: %s\n", str3);
	ft_striteri(str3, ft_to_upper_if_even_index);
	printf("Resultado: %s\n", str3);
	if (strcmp(str3, "A1B2C") == 0)
		printf("[OK]\n");
	else
		printf("[FALLO]\n");
	printf("\n");
	printf("--- Test 4: Cadena vacía ---\n");
	printf("Original: %s (longitud: %zu)\n", str4, strlen(str4));
	ft_striteri(str4, ft_to_upper_if_even_index);
	printf("Resultado: %s (longitud: %zu)\n", str4, strlen(str4));
	if (strcmp(str4, "") == 0)
		printf("[OK]\n");
	else
		printf("[FALLO]\n");
	printf("\n");
	printf("--- Test 5: Cadena NULL ---\n");
	printf("Original: %s\n", str5);
	ft_striteri(str5, ft_to_upper_if_even_index);
	printf("Resultado (no debería haber error): (no crash)\n");
	printf("[OK] (no crash)\n");
	printf("\n");
	printf("--- Test 6: Función NULL ---\n");
	printf("Original: %s\n", str6);
	ft_striteri(str6, NULL);
	printf("Resultado (no debería haber error): %s (sin cambios)\n", str6);
	if (strcmp(str6, "test") == 0)
		printf("[OK]\n");
	else
		printf("[FALLO]\n");
	printf("\n");
	return (0);
}

*/
