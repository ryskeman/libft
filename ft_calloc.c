/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fernafer <fernafer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 15:23:57 by fernafer          #+#    #+#             */
/*   Updated: 2025/04/15 21:17:28 by fernando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t			total_size;
	void			*generic_array;

	total_size = 0;
	if (nmemb == 0 || size == 0)
		total_size = 1;
	else if (nmemb > SIZE_MAX / size)
		return (NULL);
	else
		total_size = nmemb * size;
	generic_array = malloc(total_size);
	if (generic_array == 0)
		return (NULL);
	ft_memset(generic_array, 0, total_size);
	return (generic_array);
}
/*
int main() {
    // Ejemplo 1: Asignar espacio para 3 números enteros
    printf("Ejemplo 1: Asignar espacio para 3 números enteros\n");
    int *enteros = (int *)ft_calloc(3, sizeof(int));

    if (enteros == NULL) {
        printf("  Error: No se pudo asignar memoria.\n");
    } else {
        printf("  Memoria asignada. Comprobando si los enteros son cero: ");
        if (enteros[0] == 0 && enteros[1] == 0 && enteros[2] == 0) {
            printf("Sí, todos son cero.\n");
        } else {
            printf("No, algunos no son cero (valor: %d, %d, %d).\n", enteros[0], enteros[1], enteros[2]);
        }
        free(enteros); // Liberar la memoria es importante
    }
    printf("\n");

    // Ejemplo 2: Asignar espacio para 2 números decimales (double)
    printf("Ejemplo 2: Asignar espacio para 2 números decimales (double)\n");
    double *decimales = (double *)ft_calloc(2, sizeof(double));

    if (decimales == NULL) {
        printf("  Error: No se pudo asignar memoria.\n");
    } else {
        printf("  Memoria asignada. Comprobando si los decimales son cero: ");
        if (decimales[0] == 0.0 && decimales[1] == 0.0) {
            printf("Sí, todos son cero.\n");
        } else {
            printf("No, algunos no son cero (valor: %f, %f).\n", decimales[0], decimales[1]);
        }
        free(decimales); // Liberar la memoria
    }
    printf("\n");

    return 0;
}
*/
