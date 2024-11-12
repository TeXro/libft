/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzin <zzin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 15:14:29 by zzin              #+#    #+#             */
/*   Updated: 2024/11/03 16:47:17 by zzin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f (i, &s[i]);
		i++;
	}
}

// void    index_to_upper(unsigned int i, char *c)
// {
//         *c = toupper(*c);
// }
// int main(void)
// {
//     char str1[] = "hello world";
//     printf("Before: %s\n", str1);
//     ft_striteri(str1, index_to_upper);
//     printf("After:  %s\n", str1);
//     return (0);
// }
