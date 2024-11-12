/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzin <zzin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 23:21:50 by zzin              #+#    #+#             */
/*   Updated: 2024/10/26 01:55:24 by zzin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

// int main() {
//     char str[50] = "Merhba bik";
//     // Ghadi tzero 6 bytes men str
// 	printf("Before bzero: %s\n", str);
//     ft_bzero(str, 2);
// 	printf("After bzero: %s\n", str + 2);
//     return 0;
// }