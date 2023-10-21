/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddogan <ddogan@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 15:58:39 by ddogan            #+#    #+#             */
/*   Updated: 2023/10/21 16:10:57 by ddogan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	t;
	int	sign;
	int	result;

	result = 0;
	sign = 1;
	t = 0;
	while (str[t] == ' ' || (str[t] >= 9 && str[t] <= 13))
		t++;
	if (str[t] == '-' || str[t] == '+')
	{
		if (str[t] == '-')
			sign *= -1;
		t++;
	}
	while (str[t] >= '0' && str[t] <= '9')
	{
		result *= 10;
		result += str[t] - '0';
		t++;
	}
	return (result * sign);
}
