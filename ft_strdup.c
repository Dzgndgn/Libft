/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddogan <ddogan@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 15:59:57 by ddogan            #+#    #+#             */
/*   Updated: 2023/10/21 16:42:18 by ddogan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*ptr;
	int		a;
	int		size;

	a = 0;
	size = ft_strlen(s1);
	ptr = (char *) malloc(size + 1);
	if (!ptr)
		return (NULL);
	while (s1[a])
	{
		ptr[a] = s1[a];
		a++;
	}
	ptr[a] = '\0';
	return (ptr);
}
