/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsarkija <jsarkija@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 11:48:09 by jsarkija          #+#    #+#             */
/*   Updated: 2024/08/22 15:49:19 by jsarkija         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
	{
		return (0);
	}
	if (power == 0)
	{
		return (1);
	}
	if (power % 2 == 0)
	{
		return (ft_recursive_power(nb * nb, power / 2));
	}
	else
	{
		return (nb * ft_recursive_power(power * power, nb / 2));
	}
}
/*
#include <stdio.h>
int	main(void)
{
	int	nb = 5;
	int	power = 5;

	ft_recursive_power(nb, power);
	printf("%d", ft_recursive_power(nb, power));
}
*/
