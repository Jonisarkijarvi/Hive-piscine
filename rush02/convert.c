/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsarkija <jsarkija@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 19:56:47 by jsarkija          #+#    #+#             */
/*   Updated: 2024/08/18 19:57:15 by jsarkija         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	put_str(char *str)
{
	int	i;
	i = 0;
	while(str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	
}

void	convert(char *num)
{
	int	len;

	len = ft_strlen(num);
	if (len == 0)
	{
		write(1, "Error", 5);
		return ;
	}
	if (len > 4)
	{
		write(1, "Not supported", 13);
		return ;
	}
	char *single_digit[] = {"zero", "one", "two", "three", "four","five", "six", "seven", "eight", "nine"};
	char *tens_place[] = {"", "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
	char *tens_multiple[] = {"", "", "twenty", "thirty", "forty", "fifty","sixty", "seventy", "eighty", "ninety"};
	char *tens_power[] =  {"hundred", "thousand"};
	if (len == 1)
	{
		put_str(single_digit[*num - '0']);
		return ;
	}
	while (*num)
	{
		if (len >= 3)
		{
			if (*num - '0')
			{
				put_str(single_digit[*num - '0']);
				put_str(" ");
            			put_str(tens_power[len-3]);
            			put_str(" ");
			}
			len--;
		}
		else 
		{
			if (*num == '1')
			{
				int sum = *num - '0' + *(num + 1)- '0';	
				put_str(tens_place[sum]);
				put_str(" ");
				return;
			}
			else if (*num == '2' && *(num + 1) == '0')
			{
            			put_str("twenty");
            			put_str(" ");
            			return ;
			}
			else
			{
				int i = *num - '0';
				put_str(tens_multiple[i]);
				put_str(" ");
				num++;
				if (*num != '0')
					put_str(single_digit[*num - '0']);
			}
		}
		num++;
	}		
}

int	str_is_numeric(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (0);
	if (str[i] == '-')
		return (-1);
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

int	main(int argc, char**argv)
{
	int	i;
	
	i = 1;
	i = str_is_numeric(argv[i]);
	if (i == 0)
	{
		write (1, "Put only numbers", 17);
		return (0);		
	}
	if (argc == 2)
	{
		convert (argv[i]);
	}
	return (0);
}
