/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsarkija <jsarkija@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 15:00:47 by jsarkija          #+#    #+#             */
/*   Updated: 2024/08/03 18:08:00 by jsarkija         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_row(int x, char start, char middle, char end)
{
	int	index;

	index = 0;
	while (index < x)
	{
		if (index == 0)
			ft_putchar(start);
		else if (index == x - 1)
			ft_putchar(end);
		else
			ft_putchar(middle);
		index++;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	index;

	index = 0;
	while (index < y)
	{
		if (index == 0 || index == y - 1)
			print_row(x, 'A', 'B', 'C');
		else
			print_row(x, 'B', ' ', 'B');
		index++;
	}
}

int	main(void)
{
	rush(1, 5);
	return (0);
}
