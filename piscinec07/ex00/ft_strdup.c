/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsarkija <jsarkija@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 10:20:27 by jsarkija          #+#    #+#             */
/*   Updated: 2024/08/21 13:39:31 by jsarkija         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*res;
	int		i;

	i = 0;
	while (src[i])
		i++;
	res = (char *) malloc (sizeof (*res) * i + 1);
	if (res == NULL)
		return (NULL);

	while (src[i])
	{
		res [i] = src[i];
		i++;
	}
	res[i] = '\0';
	return (res);
}

#include <stdio.h>

int	main(void)
{
	printf("%s", ft_strdup("Hello"));
	return (0);
}
