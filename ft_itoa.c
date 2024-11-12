/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzin <zzin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 16:56:03 by zzin              #+#    #+#             */
/*   Updated: 2024/11/08 11:10:05 by zzin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	counti(int rs)
{
	int	i;

	i = 0;
	if (rs < 0)
		rs *= -1;
	while (rs != 0)
	{
		rs /= 10;
		i++;
	}
	return (i);
}

char	*redst(int count, int i, int rs, char *dst)
{
	int	sr;

	sr = 0;
	if (rs == -2147483648)
	{
		rs = -2147483647;
		sr = 1;
	}
	if (rs < 0)
	{
		rs *= -1;
		dst[0] = '-';
	}
	dst[count] = '\0';
	while (count > i)
	{
		count--;
		dst[count] = ((sr == 1) + rs % 10) + '0';
		rs /= 10;
		sr = 0;
	}
	return (dst);
}

char	*ft_itoa(int n)
{
	char		*dst;
	int			count;
	int			i;
	long int	rs;

	rs = n;
	count = counti(rs);
	i = (rs < 0);
	if (rs < 0 || count == 0)
		count++;
	dst = (char *)malloc((count + 1) * sizeof(char));
	if (!dst)
		return (NULL);
	return (redst(count, i, rs, dst));
}

// int main ()
// {
// 	printf("%s", ft_itoa(2131221LL));
// 	// char dst;
// 	// dst = (0 % 10) + '0';
// 	// printf("%c", dst);	
// }