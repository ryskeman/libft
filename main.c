/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fernafer <fernafer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 18:43:52 by fernafer          #+#    #+#             */
/*   Updated: 2025/04/10 20:08:26 by fernafer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	char	*str;

	printf("%d\n", isalnum(125));
	printf("%d\n", ft_isalnum(125));
	printf("%d\n", isalpha(50));
	printf("%d\n", ft_isalpha(50));
	printf("%d\n", isdigit(5));
	printf("%d\n", ft_isdigit(57));
	printf("%d\n", _isascii(50));
	printf("%d\n", ft_isascii(50));
	printf("%d\n", isprint(150));
	printf("%d\n", ft_isprint(150));
	str = "Hello 42";
	printf("%lu\n", strlen(str));
	printf("%zu\n", ft_strlen(str));
	return (0);
}
