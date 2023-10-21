/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddogan <ddogan@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 16:00:03 by ddogan            #+#    #+#             */
/*   Updated: 2023/10/21 16:45:20 by ddogan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ptr;
	int		t;
	int		a;

	a = 0;
	t = 0;
	ptr = (char *) malloc (sizeof (char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!ptr)
		return (NULL);
	while (s1[t])
	{
		ptr[t] = s1[t];
		t++;
	}
	while (s2[a])
	{
		ptr[t++] = s2[a++];
	}
	ptr[t] = 0;
	return (ptr);
}
