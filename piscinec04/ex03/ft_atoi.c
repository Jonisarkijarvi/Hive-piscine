/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsarkija <jsarkija@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 14:29:11 by jsarkija          #+#    #+#             */
/*   Updated: 2024/08/22 19:00:50 by jsarkija         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	res;
	int	minuscount;

	res = 0;
	minuscount = 0;
	while ((*str == ' ') || (*str == '\t') || (*str == '\r')
		|| (*str == '\v') || (*str == '\f') || (*str == '\n'))
		str++;
	while ((*str == '-') || (*str == '+'))
	{
		if (*str == '-')
			minuscount++;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		res = res * 10 + (*str - 48);
		str++;
	}
	if (minuscount % 2 == 1)
		return (res * -1);
	return (res);
}
/*
#include <stdio.h>
int	main(void)
{
	char	str[] =	"   ---+--+1234ab567";
	printf("%d\n", ft_atoi(str));
	return (0);
}
*/
