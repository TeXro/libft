/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzin <zzin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 17:23:54 by zzin              #+#    #+#             */
/*   Updated: 2024/11/06 18:15:53 by zzin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(
				const char *s1,
				const char *s2,
				size_t n){
	size_t	length;

	length = 0;
	while (
		n > 0
		&& s1[length] != '\0'
		&& s2[length] != '\0'
		&& (unsigned char)s1[length] == (unsigned char)s2[length])
	{
		length++;
		n--;
	}
	if (n == 0)
	{
		return (0);
	}
	else
	{
		return ((unsigned char)s1[length] - (unsigned char)s2[length]);
	}
}

// int main ()
// {
// 	char *s1 = "test\200";
// 	char *s2 = "test\0";
// 	printf("%d \n",ft_strncmp(s1, s2, 6));
// 	printf("%d \n",strncmp(s1, s2, 6));
// }