/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzin <zzin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 15:01:35 by zzin              #+#    #+#             */
/*   Updated: 2024/10/27 15:03:43 by zzin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*ps1;
	unsigned char	*ps2;

	ps1 = (unsigned char *)s1;
	ps2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (ps1[i] != ps2[i])
			return (ps1[i] - ps2[i]);
		i++;
	}
	return (0);
}
// int main(void) {
//     char str1[] = "h";
//     char str2[] = "HelloWorld";
//     char str3[] = "HellO";
//     printf("memcmp(str1, str2, 10): %d\n", memcmp(str1, str2, 10));
//     printf("ft_memcmp(str1, str2, 10): %d\n", ft_memcmp(str1, str2, 10));
//     return 0;
// }
// int main(){
// 	printf("og: %d \n", memcmp("fA","fa",4));
// 	printf("my: %d \n", ft_memcmp("fA","fa",4));
// }