/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddogan <ddogan@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 15:59:26 by ddogan            #+#    #+#             */
/*   Updated: 2023/10/21 19:13:47 by ddogan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	t;

	t = 0;
	if (!dst && !src)
		return (0);
	while (t < n)
	{
		*(unsigned char *)(dst + t) = *(unsigned char *)(src + t);
		t++;
	}
	return (dst);
}
