/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fernafer <fernafer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 10:51:42 by fernafer          #+#    #+#             */
/*   Updated: 2025/04/19 11:08:41 by fernafer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_know_num_digits(long long n, int num)
{
	if (n > 0)
		return (ft_know_num_digits(n / 10, num + 1));
	return (num);
}

static char	*ft_handle_special_cases(int n)
{
	if (n == 0)
		return (ft_strdup("0"));
	else
		return (ft_strdup("-2147483648"));
}

static char	*ft_convert_int_to_string(long long n, int is_negative, int size,
		char *s)
{
	int	total_size;

	total_size = size + is_negative;
	s[total_size] = '\0';
	while (total_size--)
	{
		s[total_size] = (n % 10) + '0';
		n /= 10;
	}
	if (is_negative)
		s[0] = '-';
	return (s);
}

char	*ft_itoa(int n)
{
	int			is_negative;
	int			num_of_digits;
	char		*num_in_string;
	long long	nl;

	is_negative = 0;
	nl = n;
	if (n == 0 || n == INT_MIN)
		return (ft_handle_special_cases(n));
	if (nl < 0)
	{
		is_negative = 1;
		nl = -nl;
	}
	num_of_digits = ft_know_num_digits(nl, 0);
	if (is_negative)
		num_in_string = malloc((num_of_digits + 2) * sizeof(char));
	else
		num_in_string = malloc((num_of_digits + 1) * sizeof(char));
	if (!num_in_string)
		return (NULL);
	return (ft_convert_int_to_string(nl, is_negative, num_of_digits,
			num_in_string));
}

/*
int	main(void)
{
	int		test_numbers[] = {0, 123, -456, INT_MAX, INT_MIN, 987654321,
				-987654321};
	size_t	num_tests;
	int		num;
	char	*ft_itoa_result;

	num_tests = sizeof(test_numbers) / sizeof(test_numbers[0]);
	for (size_t i = 0; i < num_tests; i++)
	{
		num = test_numbers[i];
		ft_itoa_result = ft_itoa(num);
		char std_itoa_result[20]; // Aseguramos suficiente espacio
		sprintf(std_itoa_result, "%d", num);
		printf("--- Test %zu: Número = %d ---\n", i + 1, num);
		printf("ft_itoa: \"%s\"\n", ft_itoa_result);
		printf("sprintf: \"%s\"\n", std_itoa_result);
		if (ft_itoa_result && strcmp(ft_itoa_result, std_itoa_result) == 0)
		{
			printf("[OK] Coinciden\n");
		}
		else
		{
			printf("[FALLO] No coinciden\n");
		}
		if (ft_itoa_result)
			free(ft_itoa_result);
	}
	// Prueba con NULL (aunque ft_itoa no debería recibir NULL)
	printf("\n--- Test con entrada NULL (para robustez del test) ---\n");
	char *ft_itoa_null = ft_itoa(0); // ft_itoa no debería fallar con 0
	if (ft_itoa_null)
		free(ft_itoa_null); // Para evitar warnings
	return (0);
}
*/
