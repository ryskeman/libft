/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fernafer <fernafer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 15:21:44 by fernafer          #+#    #+#             */
/*   Updated: 2025/04/19 12:35:02 by fernafer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_know_words(char const *s, char c)
{
	int	i;
	int	count;
	int	in_word;

	i = 0;
	count = 0;
	in_word = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			if (!in_word)
			{
				count++;
				in_word = 1;
			}
		}
		else
			in_word = 0;
		i++;
	}
	return (count);
}

static void	*ft_free_memory(char **matrix)
{
	int	i;

	i = 0;
	while (matrix[i])
	{
		free(matrix[i]);
		i++;
	}
	free(matrix);
	return (NULL);
}

char	**ft_fill_up_matrix(const char *s, char **matrix, char c)
{
	int	i;
	int	start;
	int	index;

	i = 0;
	start = -1;
	index = 0;
	while (s[i])
	{
		if (s[i] != c && start == -1)
			start = i;
		else if ((s[i] == c || s[i + 1] == '\0') && start != -1)
		{
			if (s[i] == c)
				matrix[index++] = ft_substr(s, start, i - start);
			else
				matrix[index++] = ft_substr(s, start, i - start + 1);
			if (!matrix[index - 1])
				return (NULL);
			start = -1;
		}
		i++;
	}
	matrix[index] = NULL;
	return (matrix);
}

char	**ft_split(char const *s, char c)
{
	int		num_substrings;
	char	**matrix;

	if (!s)
		return (NULL);
	num_substrings = ft_know_words(s, c);
	if (num_substrings == 0)
		return (NULL);
	matrix = malloc((num_substrings + 1) * sizeof(char *));
	if (!matrix)
		return (NULL);
	if (!ft_fill_up_matrix(s, matrix, c))
		return (ft_free_memory(matrix));
	return (matrix);
}
/*
int	main(void)
{
	char	*s;
	char	**v;

	s = "   Hello w0rld, chicos!!";
	v = ft_split(s, ' ');
	while (*v)
		printf("%s\n", *v++);
}
*/
