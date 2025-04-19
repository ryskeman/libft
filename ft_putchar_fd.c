/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fernafer <fernafer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 12:51:06 by fernafer          #+#    #+#             */
/*   Updated: 2025/04/19 13:03:25 by fernafer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
/*
int	main(void)
{
	int	fd;

	// Usar la salida estándar (stdout)
	ft_putchar_fd('H', 1);
	ft_putchar_fd('o', 1);
	ft_putchar_fd('l', 1);
	ft_putchar_fd('a', 1);
	ft_putchar_fd('\n', 1);
	// Usar la salida de error estándar (stderr)
	ft_putchar_fd('E', 2);
	ft_putchar_fd('r', 2);
	ft_putchar_fd('r', 2);
	ft_putchar_fd('o', 2);
	ft_putchar_fd('r', 2);
	ft_putchar_fd('\n', 2);
	// También puedes probar a escribir en un archivo
	fd = open("prueba.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (fd != -1)
	{
		ft_putchar_fd('E', fd);
		ft_putchar_fd('s', fd);
		ft_putchar_fd('c', fd);
		ft_putchar_fd('r', fd);
		ft_putchar_fd('i', fd);
		ft_putchar_fd('b', fd);
		ft_putchar_fd('i', fd);
		ft_putchar_fd('e', fd);
		ft_putchar_fd('n', fd);
		ft_putchar_fd('d', fd);
		ft_putchar_fd('o', fd);
		ft_putchar_fd('\n', fd);
		close(fd);
		printf("Se ha escrito en el archivo prueba.txt\n");
	}
	else
	{
		perror("Error al abrir el archivo");
	}
	return (0);
}
*/
