/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luciano <luciano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 15:03:26 by llima-da          #+#    #+#             */
/*   Updated: 2022/05/30 14:11:14 by luciano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char				*ptr;
	int					i;
	unsigned int		end;

	i = 0;
	if (len > ft_strlen(s))
		ptr = (char *)malloc(ft_strlen(s) + 1);
	else
		ptr = malloc(sizeof(char) * (len + 1));
	if (!ptr)
		return (NULL);
	end = start + len;
	if (start <= ft_strlen(s))
	{
		while (start < end && s[start] != '\0')
		{
				ptr[i] = s[start];
				i++;
				start++;
		}
	}
	ptr[i] = '\0';
	return (ptr);
}
