/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsarkija <jsarkija@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 13:39:40 by jsarkija          #+#    #+#             */
/*   Updated: 2024/08/11 13:06:13 by jsarkija         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	check_double(int tab[4][4], int pos, int num)
{
	int	i1;

	i1 = -1;
	while (++i1 < pos / 4)
		if (tab[i1][pos % 4] == num)
			return (1);
	i1 = -1;
	while (++i1 < pos % 4)
		if (tab[pos / 4][i1] == num)
			return (1);
	return (0);
}

int	check_row1_left(int tab[4][4], int pos, int entry[16])
{
	int	i1;
	int	max;
	int	count;

	i1 = 0;
	max = 0;
	count = 0;
	if (pos % 4 == 3)
	{
		while (1 < 4)
		{
			if (tab[pos / 4][i1] > max)
			{
				max = tab[pos / 4][i1];
				count++;
			}
			i1++;
		}
		if (entry[8 + pos / 4] != count)
			return (1);
	}
	return (0);
}

void	display_solution(int tab[4][4])
{
	int	i1;
	int	j1;

	i1 = -1;
	while (++i1 < 4)
	{
		j1 = -1;
		while (++j1 < 4)
		{
			ft_putchar(tab[i1][j1]);
		}
		ft_putchar('\n');
	}
}

int	check_case(int tab[4][4], int pos, int entry[16])
{
	if (check_row1_left(tab, pos, entry) == 1)
		return (1);
	return (0);
}

int	main(void)
{
	int	tab[4][4];
	int	pos;
	int	entry[16];
	int	num;

	check_row1_left(tab, pos, entry);
	display_solution(tab);
	check_double(tab, pos, num);
	check_case(tab, pos, entry);
	return (0);
}
