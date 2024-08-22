/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsarkija <jsarkija@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 12:35:14 by jsarkija          #+#    #+#             */
/*   Updated: 2024/08/22 15:50:29 by jsarkija         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;
	int	result;

	if (nb == 0 || nb == 1)
		return (0);
	result = 1;
	i = 1;
	while (result <= nb)
	{
		i++;
		result = i * i;
	}
	return (i - 1);
}
/*
#include <stdio.h>
int	main(void)
{
	int nb = 11;
	printf("%d\n", ft_sqrt(nb));
	return (0);
}
*/
