/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchumbas <tchumbas@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 18:07:19 by tchumbas          #+#    #+#             */
/*   Updated: 2025/08/12 13:59:27 by tchumbas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	isnum(char str)
{
	return ('0' <= str && str <= '9');
}

int	issign(char str)
{
	return (str == '-' || str == '+');
}

int	ft_atoi(char *str)
{
	int	sum;
	int	i;
	int	sign;

	sum = 0;
	i = 0;
	sign = 1;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (issign(str[i]))
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (isnum(str[i]))
	{
		sum = (sum * 10) + (str[i] - '0');
		i++;
	}
	return (sign * sum);
}

/* int	main(void)
{
	char *str = " ---+--+1234ab567";
	char *str2 = " -22sb--1-+--+1234ab567";
	char *str3 = "";
	char *str4 = "char *str -2 = ";
	printf("%d\n", ft_atoi(str));
	printf("%d\n", ft_atoi(str2));
	printf("%d\n", ft_atoi(str3));
	printf("%d\n", ft_atoi(str4));
} */