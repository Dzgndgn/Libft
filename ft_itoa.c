/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddogan <ddogan@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 15:59:18 by ddogan            #+#    #+#             */
/*   Updated: 2023/10/21 17:27:35 by ddogan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	n_size(int number)
{
	int	len;

	len = 0;
	if (number == 0)
		return (1);
	if (number < 0)
	{
		len++;
	}
	while (number != 0)
	{
		len++;
		number /= 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char			*ptr;
	long int		num;
	unsigned int	lengt;

	num = n;
	lengt = n_size(n);
	ptr = (char *)malloc(sizeof(char *) * (lengt + 1));
	if (ptr == 0)
		return (0);
	if (num < 0)
	{
		ptr[0] = '-';
		num *= -1;
	}
	if (num == 0)
		ptr[0] = 48;
	ptr[lengt] = '\0';
	while (num > 0)
	{
		ptr[lengt - 1] = (num % 10) + 48;
		num /= 10;
		lengt --;
	}
	return (ptr);
}
