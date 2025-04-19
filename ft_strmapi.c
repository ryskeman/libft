/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fernafer <fernafer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 11:25:15 by fernafer          #+#    #+#             */
/*   Updated: 2025/04/19 12:00:01 by fernafer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	size_t			s_len;
	char			*new_str;

	if (!s || !f)
		return (ft_strdup(""));
	i = 0;
	s_len = ft_strlen(s);
	new_str = malloc((s_len + 1) * sizeof(char));
	if (!new_str)
		return (NULL);
	while (s[i])
	{
		new_str[i] = f(i, s[i]);
		i++;
	}
	new_str[i] = '\0';
	return (new_str);
}

/*
static char	ft_adapt_toupper(unsigned int index, char c)
{
	(void)index;
	return (char)ft_toupper(c);
}

int	main(void)
{
	char	*str;
	char	*mapped_str;

	str = "hola";
	printf("Cadena original: \"%s\"\n", str);
	// Prueba con una función válida
	mapped_str = ft_strmapi(str, ft_adapt_toupper);
	if (mapped_str)
	{
		printf("Cadena mapeada (mayúsculas): \"%s\"\n", mapped_str);
		free(mapped_str);
	}
	else
	{
		printf("Error: ft_strmapi devolvió NULL\n");
	}
	return (0);
}

*/
