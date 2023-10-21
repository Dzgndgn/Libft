/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddogan <ddogan@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 16:00:25 by ddogan            #+#    #+#             */
/*   Updated: 2023/10/21 20:30:15 by ddogan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int		i;
	char	*result;	

	c = (unsigned char)c;
	i = ft_strlen(str);
	result = (char *)str;
	if (c == 0)
		return (&result[i]);
	while (i >= 0)
	{
		if (result[i] == c)
			return (&result[i]);
		if (i > 0)
			i--;
		else
			break ;
	}
	return (0);
}
