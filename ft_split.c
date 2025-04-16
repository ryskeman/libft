/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fernafer <fernafer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 15:21:44 by fernafer          #+#    #+#             */
/*   Updated: 2025/04/16 16:40:07 by fernafer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	safe_malloc(char **token_v, size_t position, size_t buffer)
{
	size_t	i;

	i = 0;
	token_v[position] = malloc(buffer);
	if (NULL == token_v[position])
	{
		while (i < position)
		{
			free(token_v[i++]);
		}
		free(token_v);
		return (1);
	}
	return (0);
}

int	complete(char **token_v, char const *s, char delimeter)
{
	size_t	len;
	size_t	i;

	i = 0;
	while (*s)
	{
		len = 0;
		while (*s == delimeter && *s)
			++s;
		while (*s != delimeter && *s)
		{
			++len;
			++s;
		}
		if (len)
		{
			if (safe_malloc(token_v, i, len + 1))
				return (1);
			ft_strlcpy(token_v[i], s - len, len + 1);
			++i;
		}
	}
	return (0);
}

size_t	count_tokens(char const *s, char delimiter)
{
	size_t	tokens;
	int		inside_token;

	tokens = 0;
	while (*s)
	{
		inside_token = 0;
		while (*s == delimiter && *s)
			++s;
		while (*s != delimiter && *s)
		{
			if (!inside_token)
			{
				++tokens;
				inside_token = 1;
			}
			++s;
		}
	}
	return (tokens);
}

char	**ft_split(char const *s, char charset)
{
	size_t	tokens;
	size_t	i;
	char	**token_v;

	i = 0;
	if (NULL == s)
		return (NULL);
	tokens = 0;
	tokens = count_tokens(s, charset);
	token_v = malloc((tokens + 1) * sizeof(char *));
	if (NULL == token_v)
		return (NULL);
	token_v[tokens] = NULL;
	if (complete(token_v, s, charset))
	{
		while (i < tokens)
		{
			free(token_v[i]);
			i++;
		}
		free(token_v);
		return (NULL);
	}
	return (token_v);
}
/*
int	main(void)
{
	char	*s;
	char	**v;

	s = "   Hello w0rld, chicos!!";
	v = ft_split(s, " ");
	while (*v)
		printf("%s\n", *v++);
}
*/
