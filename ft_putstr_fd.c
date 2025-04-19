/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fernafer <fernafer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 13:04:56 by fernafer          #+#    #+#             */
/*   Updated: 2025/04/19 13:09:32 by fernafer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (s)
	{
		while (*s)
		{
			ft_putchar_fd(*s, fd);
			s++;
		}
	}
}
/*
int	main(void)
{
	char	*mensaje1;
	char	*mensaje2;
	char	*mensaje_vacio;
	char	*mensaje_nulo;

	mensaje1 = "Esta es la primera cadena.\n";
	mensaje2 = "Y esta es la segunda.\n";
	mensaje_vacio = "";
	mensaje_nulo = NULL;
	int stdout_fd = 1; // Descriptor de archivo para la salida estándar
	ft_putstr_fd(mensaje1, stdout_fd);
	ft_putstr_fd(mensaje2, stdout_fd);
	ft_putstr_fd(mensaje_vacio, stdout_fd); // Prueba con una cadena vacía
	ft_putstr_fd(mensaje_nulo, stdout_fd);
		// Prueba con un puntero NULL (debería no hacer nada)
	return (0);
}
*/
