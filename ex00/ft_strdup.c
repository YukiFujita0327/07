/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yufujita <yufujita@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/23 00:56:36 by yufujita          #+#    #+#             */
/*   Updated: 2020/01/25 08:44:48 by yufujita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int n;

	n = 0;
	while (str[n] != '\0')
	{
		n++;
	}
	return (n);
}

char	*ft_strdup(char *src)
{
	int		n;
	char	*ret;

	n = 0;
	ret = (char *)malloc((int)sizeof(char) * ft_strlen(src) + 1);
	if (ret == '\0')
		return (ret);
	*ret = 0;
	while (src[n])
	{
		ret[n] = src[n];
		n++;
	}
	ret[n] = '\0';
	return (ret);
}
