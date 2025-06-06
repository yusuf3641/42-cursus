/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuskaya <yuskaya@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 14:08:31 by yuskaya           #+#    #+#             */
/*   Updated: 2025/06/03 12:42:23 by yuskaya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t					i;
	unsigned char			*dst1;
	const unsigned char		*src1;

	dst1 = (unsigned char *)dst;
	src1 = (const unsigned char *)src;
	i = 0;
	if (src1 < dst1)
	{
		while (0 < len)
		{
			len--;
			dst1[len] = src1[len];
		}
	}
 	else
	{
		while (i < len)
		{
			dst1[i] = src1[i];
			i++;
		}
	}
	return (dst);
}
