/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsarkija <sarkija@student.hive.fi>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 17:53:19 by jsarkija          #+#    #+#             */
/*   Updated: 2024/08/02 12:03:17 by jsarkija         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	start;

	start = 'a';
	while (start <= 'z')
	{
		write(1, &start, 1);
		start += 1;
	}
}
