/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchumbas <tchumbas@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 18:07:19 by tchumbas          #+#    #+#             */
/*   Updated: 2025/08/11 20:05:19 by tchumbas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_find(char *str)
{
	unsigned int	i;
	char			*c;
	char			*start;

	i = 0;
	c = &str[i];
	start = "0";
	while (str[i])
	{
		if ((('0' <= *c) && (*c <= '9')) || *c == '-' || *c == '+')
		{
			start = c;
			return (start);
		}
	}
	return (0);
}

int	ft_atoi(char *str)
{
	ft_find(str);
	return (0);
}

int	main(void)
{
	char *str = "   ---+--+1234ab567";
	ft_atoi(str);
}