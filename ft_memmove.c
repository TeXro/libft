/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzin <zzin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 15:09:31 by zzin              #+#    #+#             */
/*   Updated: 2024/11/06 15:31:25 by zzin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*pdst;
	unsigned char	*psrc;

	pdst = (unsigned char *)dst;
	psrc = (unsigned char *)src;
	if (pdst == psrc || len == 0)
		return (dst);
	if (pdst < psrc)
	{
		ft_memcpy(dst, src, len);
	}
	else
	{
		while (len--)
			pdst[len] = psrc[len];
	}
	return (dst);
}

// int main() {
// char dst[10] = "ziwffe"; // zziwffe
// char src[10] = "ziad";
// int i = 0;
// memmove(dst + 2, dst, 6);
// printf("%s \n", dst);
// memmove(dst, src, 6);
// while (i < 10)
// {
// 	// if(dst[i] == '\0')
// 	// 	printf("0");
// 	printf("%c", dst[i]);
// 	i++;	
// }
// i = 0;
// printf("\n");
// while (i < 10)
// {
// 	printf("%d", i);	
// 	i++;	
// }
// }