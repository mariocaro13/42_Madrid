/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcaro-ro <mcaro-ro@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 19:22:44 by mcaro-ro          #+#    #+#             */
/*   Updated: 2024/01/25 19:22:46 by mcaro-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*pt;
	size_t	len;

	len = ft_strlen(s1) + 1;
	pt = (char *)ft_calloc(len, sizeof(char));
	if (pt == 0)
		return (0);
	ft_strlcpy(pt, s1, len);
	return (pt);
}
