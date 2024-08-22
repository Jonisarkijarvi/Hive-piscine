/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsarkija <jsarkija@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 13:09:54 by jsarkija          #+#    #+#             */
/*   Updated: 2024/08/22 15:45:50 by jsarkija         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	if (nb == 0)
		return (1);
	return (nb * ft_iterative_factorial(nb - 1));
}
/*
#include <stdio.h>
int	main(void)
{
	int	num;

	num = 5;
	printf("Factorial of %d is %d", num, ft_iterative_factorial(num));
	return (0);
}
*/
