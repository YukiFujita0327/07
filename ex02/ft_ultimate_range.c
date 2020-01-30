/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yufujita <yufujita@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/23 23:03:14 by yufujita          #+#    #+#             */
/*   Updated: 2020/01/30 22:03:21 by yufujita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int		ret;
	int		*tmp;
	int		i;
	int		*null;

	ret = 0;
	null = 0;
	if (max - min <= 0)
	{
		range = &null;
		return (0);
	}
	tmp = (int *)malloc(sizeof(int) * (max - min));
	if (tmp == 0)
		return (-1);
	i = 0;
	while (min < max)
	{
		tmp[i] = min;
		i++;
		min++;
	}
	*range = tmp;
	return (i);
}
