/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsarkija <jsarkija@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 12:48:37 by jsarkija          #+#    #+#             */
/*   Updated: 2024/08/22 19:00:10 by jsarkija         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	character;

	if (nb <= (-2147483648))
	{
		write (1, "-2147483648", 11);
		return ;
	}
	else
	{
		if (nb < 0)
		{
			write (1, "-", 1);
			nb = nb * (-1);
		}
	}
	if (nb < 10)
	{
		character = nb + 48;
		write (1, &character, 1);
	}
	else
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
}
/*
int	main(void)
{
	ft_putnbr (-2147483648);
	return (0);
}
*/
