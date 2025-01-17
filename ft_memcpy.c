/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzin <zzin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 13:25:53 by zzin              #+#    #+#             */
/*   Updated: 2024/11/08 11:36:45 by zzin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	char		*d;
	const char	*s;
	size_t		i;

	s = (const char *)src;
	d = (char *)dst;
	if (!s && !d)
		return (NULL);
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dst);
}

// int main()
// {
//  char dst[20] = "ziadff";
//  char *src = "texro";
// //ft_memcpy(NULL, NULL, 10);
//  printf("{%s} \n",ft_memcpy(NULL, NULL, 20));
// //  for (size_t i = 0; i < 10; i++)
// //  {
// // 	printf("{%c}",dst[i]);
// //  }
// }