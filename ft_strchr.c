/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaksoy <aaksoy@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 13:34:52 by aaksoy            #+#    #+#             */
/*   Updated: 2023/12/07 23:34:30 by aaksoy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*i;

	i = (char *)s;
	while (*i)
	{
		if (*i == (char)c)
			return (i);
		i++;
	}
	if (*i == (char)c)
		return (i);
	return (NULL);
}
