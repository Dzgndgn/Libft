/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddogan <ddogan@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 16:00:06 by ddogan            #+#    #+#             */
/*   Updated: 2023/10/21 18:05:20 by ddogan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	t;
	size_t	a;

	a = 0;
	t = 0;
	while (dst[t] && t < dstsize)
	{
		t++;
	}
	while (src[a] && (a + t + 1) < dstsize)
	{
		dst[t + a] = src[a];
		a++;
	}
	if (t < dstsize)
		dst[a + t] = '\0';
	return (t + ft_strlen(src));
}
