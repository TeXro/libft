/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzin <zzin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 10:36:32 by zzin              #+#    #+#             */
/*   Updated: 2024/11/04 15:25:07 by zzin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	char	*p;
	size_t	i;

	p = (char *)b;
	i = 0;
	while (i != len)
	{
		p[i] = c;
		i++;
	}
	return (b);
}

// int main()
// {
// 	char b[] = "ppllo";
// 	// void *b;
// 	// int c = '-';
// 	// size_t len = 1;
// 	printf("before: %s\n", b);
// 	memset(b, 'z', 6);
// 	printf("after:  %s\n", b);
// 	return 0;
// }