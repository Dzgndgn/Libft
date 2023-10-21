/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddogan <ddogan@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 16:00:22 by ddogan            #+#    #+#             */
/*   Updated: 2023/10/21 15:31:02 by ddogan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	t;
	size_t	a;

	t = 0;
	a = 0;
	if (*needle == 0)
		return ((char *)haystack);
	while (haystack[t] && t < len)
	{
		if (haystack[t] == needle[a])
			a++;
		else if (haystack[t] != needle[a] && a != 0)
		{
			t = t - a;
			a = 0;
		}
		else
			a = 0;
		t++;
		if (needle[a] == '\0')
			return ((char *)(haystack + t - a));
	}
	return (NULL);
}
