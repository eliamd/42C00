/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edetoh <edetoh@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 11:22:32 by edetoh            #+#    #+#             */
/*   Updated: 2024/08/07 11:30:34 by edetoh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char numbers[3];
	int a;
	int b;
	int c;

	for (a = 0; a <= 7; a++)
	{
		for (b = a + 1; b <= 8; b++)
		{
			for (c = b + 1; c <= 9; c++)
			{
				numbers[0] = '0' + a;
				numbers[1] = '0' + b;
				numbers[2] = '0' + c;

				write(1, numbers, 3);

				if (a != 7 || b != 8 || c != 9)
				{
					write(1, ", ", 2);
				}
			}
		}
	}
}
