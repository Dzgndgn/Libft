/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddogan <ddogan@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 16:00:18 by ddogan            #+#    #+#             */
/*   Updated: 2023/10/16 19:41:24 by ddogan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	t;

	t = 0;
	while (s1[t] && s2[t] && t < n && s1[t] == s2[t])
	{
		t++;
	}
	if (t == n)
	{
		return (0);
	}
	return ((unsigned char )s1[t] - (unsigned char)s2[t]);
}
