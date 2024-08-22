/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsarkija <jsarkija@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 11:14:00 by jsarkija          #+#    #+#             */
/*   Updated: 2024/08/22 15:48:41 by jsarkija         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	if (power < 0)
	{
		return (0);
	}
	if (power == 0)
	{
		return (1);
	}
	else
	{
		return (nb * ft_iterative_power(nb, power -1));
	}
}
/*
#include <stdio.h>
int	main(void)
{
	int	nb = 5;
	int	power = 5;

	ft_iterative_power(nb, power);
	printf("%d", ft_iterative_power(nb, power));
	return (0);
}
*/
