/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fernafer <fernafer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 13:16:55 by fernafer          #+#    #+#             */
/*   Updated: 2025/04/19 13:22:09 by fernafer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	if (s)
	{
		ft_putstr_fd(s, fd);
		ft_putchar_fd('\n', fd);
	}
}

/*
int	main(void)
{
	int	stdout_fd;

	stdout_fd = 1;
	ft_putendl_fd("Esta línea terminará con un salto de línea.", stdout_fd);
	ft_putendl_fd("Esta es la segunda línea.", stdout_fd);
	ft_putendl_fd("", stdout_fd);
	ft_putendl_fd(NULL, stdout_fd);
	return (0);
}
*/
