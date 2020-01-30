/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yufujita <yufujita@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/23 19:12:32 by yufujita          #+#    #+#             */
/*   Updated: 2020/01/25 08:45:23 by yufujita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int *ret;
	int n;

	if (max - min <= 0)
		return (0);
	ret = (int *)malloc(sizeof(int) * (max - min));
	if (ret == 0)
		return (0);
	n = 0;
	while (min < max)
	{
		ret[n] = min;
		n++;
		min++;
	}
	return (ret);
}
