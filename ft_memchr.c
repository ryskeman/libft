/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fernafer <fernafer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 11:01:24 by fernafer          #+#    #+#             */
/*   Updated: 2025/04/14 15:33:25 by fernafer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*p;
	unsigned char		chr;
	size_t				i;

	p = (const unsigned char *)s;
	chr = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (p[i] == chr)
			return ((void *)(p + i));
		i++;
	}
	return (NULL);
}
/*
int	main(void)
{
	char	str1[] = "Hola mundo";
	char	str2[] = "Ejemplo de texto más largo";
	char	str3[] = "Sin coincidencias aquí";
	char	empty_str[] = "";
	int		char1;
	int		char2;
	int		char3;
	size_t	len1;
	size_t	len2;
	size_t	len3;
	size_t	len4;
	void	*ptr_ft1;
	void	*ptr_std1;
	void	*ptr_ft2;
	void	*ptr_std2;
	void	*ptr_ft3;
	void	*ptr_std3;
	void	*ptr_ft4;
	void	*ptr_std4;
	void	*ptr_ft5;
	void	*ptr_std5;
	void	*ptr_std6;

	// Casos de prueba
	// Caracteres a buscar
	char1 = 'o';
	char2 = 'x';
	char3 = 'z';
	int char4 = '\0'; // Carácter nulo
	// Tamaños a buscar
	len1 = strlen(str1);
	len2 = strlen(str2);
	len3 = strlen(str3);
	len4 = strlen(empty_str);
	size_t len5 = 5; // Buscar solo los primeros 5 bytes
	// Pruebas
	printf("--- Prueba 1 ---\n");
	ptr_ft1 = ft_memchr(str1, char1, len1);
	ptr_std1 = memchr(str1, char1, len1);
	printf("Buscando '%c' en \"%s\" (longitud %zu):\n", char1, str1, len1);
	printf("ft_memchr devuelve: %p\n", ptr_ft1);
	printf("memchr devuelve:    %p\n", ptr_std1);
	if (ptr_ft1 == ptr_std1)
	{
		printf("Resultado: Coinciden\n");
	}
	else
	{
		printf("Resultado: ¡NO coinciden!\n");
	}
	printf("\n");
	printf("--- Prueba 2 ---\n");
	ptr_ft2 = ft_memchr(str2, char2, len2);
	ptr_std2 = memchr(str2, char2, len2);
	printf("Buscando '%c' en \"%s\" (longitud %zu):\n", char2, str2, len2);
	printf("ft_memchr devuelve: %p\n", ptr_ft2);
	printf("memchr devuelve:    %p\n", ptr_std2);
	if (ptr_ft2 == ptr_std2)
	{
		printf("Resultado: Coinciden\n");
	}
	else
	{
		printf("Resultado: ¡NO coinciden!\n");
	}
	printf("\n");
	printf("--- Prueba 3 ---\n");
	ptr_ft3 = ft_memchr(str3, char3, len3);
	ptr_std3 = memchr(str3, char3, len3);
	printf("Buscando '%c' en \"%s\" (longitud %zu):\n", char3, str3, len3);
	printf("ft_memchr devuelve: %p\n", ptr_ft3);
	printf("memchr devuelve:    %p\n", ptr_std3);
	if (ptr_ft3 == ptr_std3)
	{
		printf("Resultado: Coinciden\n");
	}
	else
	{
		printf("Resultado: ¡NO coinciden!\n");
	}
	printf("\n");
	printf("--- Prueba 4 ---\n");
	ptr_ft4 = ft_memchr(empty_str, char1, len4);
	ptr_std4 = memchr(empty_str, char1, len4);
	printf("Buscando '%c' en \"%s\" (longitud %zu):\n", char1, empty_str, len4);
	printf("ft_memchr devuelve: %p\n", ptr_ft4);
	printf("memchr devuelve:    %p\n", ptr_std4);
	if (ptr_ft4 == ptr_std4)
	{
		printf("Resultado: Coinciden\n");
	}
	else
	{
		printf("Resultado: ¡NO coinciden!\n");
	}
	printf("\n");
	printf("--- Prueba 5 (longitud limitada) ---\n");
	ptr_ft5 = ft_memchr(str2, 'e', len5);
	ptr_std5 = memchr(str2, 'e', len5);
	printf("Buscando '%c' en los primeros %zu bytes de \"%s\":\n", 'e', len5,
		str2);
	printf("ft_memchr devuelve: %p\n", ptr_ft5);
	printf("memchr devuelve:    %p\n", ptr_std5);
	if (ptr_ft5 == ptr_std5)
	{
		printf("Resultado: Coinciden\n");
	}
	else
	{
		printf("Resultado: ¡NO coinciden!\n");
	}
	printf("\n");
	printf("--- Prueba 6 (buscar el nulo terminador) ---\n");
	void *ptr_ft6 = ft_memchr(str1, char4, len1 + 1); // Incluimos el nulo
	ptr_std6 = memchr(str1, char4, len1 + 1);
	printf("Buscando el carácter nulo en \"%s\" (longitud %zu):\n", str1, len1
		+ 1);
	printf("ft_memchr devuelve: %p\n", ptr_ft6);
	printf("memchr devuelve:    %p\n", ptr_std6);
	if (ptr_ft6 == ptr_std6)
	{
		printf("Resultado: Coinciden\n");
	}
	else
	{
		printf("Resultado: ¡NO coinciden!\n");
	}
	printf("\n");
	return (0);
}
*/
