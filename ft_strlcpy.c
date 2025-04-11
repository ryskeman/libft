/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fernafer <fernafer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 16:06:14 by fernafer          #+#    #+#             */
/*   Updated: 2025/04/10 20:21:07 by fernafer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

//#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t src_len;

	src_len = 0;
	while (*src != '\0')
	{
		src_len++;
		src++;
	}

	if (size > 0)
	{
		while (size > 1 && *src /*TO DO*/)
		{
			/* TO DO */
		}
	}
}