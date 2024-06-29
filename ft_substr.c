/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaksoy <aaksoy@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 16:53:18 by aaksoy            #+#    #+#             */
/*   Updated: 2023/12/08 14:54:41 by aaksoy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dest;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!s)
		return (NULL);
	if (start >= ft_strlen(s) || len == 0 || ft_strlen(s) == 0)
		return (ft_strdup(""));
	while (i < len && s[i + start] != '\0')
		i++;
	dest = (char *)malloc((sizeof(char) * i) + 1);
	if (dest == NULL)
		return (NULL);
	i = 0;
	while (s[j] != '\0')
	{
		if (j >= start && i < len)
			dest[i++] = s[start++];
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
