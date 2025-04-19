/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fernafer <fernafer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 09:29:02 by fernafer          #+#    #+#             */
/*   Updated: 2025/04/19 10:49:38 by fernafer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str_trimmed;
	int		start;
	int		end;
	int		i;

	if (!s1)
		return (ft_strdup(""));
	if (!set)
		return (ft_strdup(s1));
	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	end = ft_strlen(s1) - 1;
	while (end >= 0 && ft_strchr(set, s1[end]))
		end--;
	if (start > end)
		return (ft_strdup(""));
	str_trimmed = malloc((end - start + 2) * sizeof(char));
	if (!str_trimmed)
		return (NULL);
	i = 0;
	while (start <= end)
		str_trimmed[i++] = s1[start++];
	str_trimmed[i] = '\0';
	return (str_trimmed);
}
/*
int	main(void)
{
	char	*s1;
	char	*set;
	char	*trimmed_str;
	char	*s2;
	char	*set2;
	char	*trimmed_str2;
	char	*s3;
	char	*set3;
	char	*trimmed_str3;
	char	*s4;
	char	*set4;
	char	*trimmed_str4;
	char	*s5;
	char	*set5;
	char	*trimmed_str5;
	char	*s6;
	char	*set6;
	char	*trimmed_str6;
	char	*s7;
	char	*set7;
	char	*trimmed_str7;

	s1 = "   \t  Hola Mundo!  \n   ";
	set = " \t\n";
	trimmed_str = ft_strtrim(s1, set);
	if (trimmed_str)
	{
		printf("Cadena original: \"%s\"\n", s1);
		printf("Conjunto de caracteres a eliminar: \"%s\"\n", set);
		printf("Cadena recortada: \"%s\"\n", trimmed_str);
		free(trimmed_str);
	}
	else
	{
		printf("Error: ft_strtrim devolvió NULL\n");
	}
	printf("\n--- Otro caso ---\n");
	s2 = "<<<<Hola>>>>>";
	set2 = "<>";
	trimmed_str2 = ft_strtrim(s2, set2);
	if (trimmed_str2)
	{
		printf("Cadena original: \"%s\"\n", s2);
		printf("Conjunto de caracteres a eliminar: \"%s\"\n", set2);
		printf("Cadena recortada: \"%s\"\n", trimmed_str2);
		free(trimmed_str2);
	}
	else
	{
		printf("Error: ft_strtrim devolvió NULL\n");
	}
	printf("\n--- Caso con todos los caracteres a eliminar ---\n");
	s3 = "aaaaaa";
	set3 = "a";
	trimmed_str3 = ft_strtrim(s3, set3);
	if (trimmed_str3)
	{
		printf("Cadena original: \"%s\"\n", s3);
		printf("Conjunto de caracteres a eliminar: \"%s\"\n", set3);
		printf("Cadena recortada: \"%s\"\n", trimmed_str3);
		free(trimmed_str3);
	}
	else
	{
		printf("Error: ft_strtrim devolvió NULL\n");
	}
	printf("\n--- Caso con cadena vacía ---\n");
	s4 = "";
	set4 = " ";
	trimmed_str4 = ft_strtrim(s4, set4);
	if (trimmed_str4)
	{
		printf("Cadena original: \"%s\"\n", s4);
		printf("Conjunto de caracteres a eliminar: \"%s\"\n", set4);
		printf("Cadena recortada: \"%s\"\n", trimmed_str4);
		free(trimmed_str4);
	}
	else
	{
		printf("Error: ft_strtrim devolvió NULL\n");
	}
	printf("\n--- Caso con set vacío ---\n");
	s5 = "Hola";
	set5 = "";
	trimmed_str5 = ft_strtrim(s5, set5);
	if (trimmed_str5)
	{
		printf("Cadena original: \"%s\"\n", s5);
		printf("Conjunto de caracteres a eliminar: \"%s\"\n", set5);
		printf("Cadena recortada: \"%s\"\n", trimmed_str5);
		free(trimmed_str5);
	}
	else
	{
		printf("Error: ft_strtrim devolvió NULL\n");
	}
	printf("\n--- Caso con s1 NULL ---\n");
	s6 = NULL;
	set6 = " ";
	trimmed_str6 = ft_strtrim(s6, set6);
	if (trimmed_str6)
	{
		printf("Cadena original: NULL\n");
		printf("Conjunto de caracteres a eliminar: \"%s\"\n", set6);
		printf("Cadena recortada: \"%s\"\n", trimmed_str6);
		free(trimmed_str6);
	}
	else
	{
		printf("Caso con s1 NULL: ft_strtrim devolvió NULL (Correcto)\n");
	}
	printf("\n--- Caso con set NULL ---\n");
	s7 = "Hola";
	set7 = NULL;
	trimmed_str7 = ft_strtrim(s7, set7);
	if (trimmed_str7)
	{
		printf("Cadena original: \"%s\"\n", s7);
		printf("Conjunto de caracteres a eliminar: NULL\n");
		printf("Cadena recortada: \"%s\"\n", trimmed_str7);
		free(trimmed_str7);
	}
	else
	{
		printf("Error: ft_strtrim devolvió NULL\n");
	}
	return (0);
}

*/
