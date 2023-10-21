/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddogan <ddogan@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 15:59:20 by ddogan            #+#    #+#             */
/*   Updated: 2023/10/21 19:30:17 by ddogan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	size_t			t;

	str = (unsigned char *) s;
	t = 0;
	while (t < n)
	{
		if (str[t] == (unsigned char)c)
			return (&str[t]);
		t++;
	}
	return (0);
}
