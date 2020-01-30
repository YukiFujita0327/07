/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yufujita <yufujita@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/24 22:13:47 by yufujita          #+#    #+#             */
/*   Updated: 2020/01/30 19:14:29 by yufujita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*get_memor(int size)
{
	int		n;
	char	*ret;

	n = size;
	ret = (char *)malloc(sizeof(char) * (size + 1));
	if (ret == '\0')
		return (0);
	*ret = 0;
	return (ret);
}

char	*ft_strcat(char *dest, char *src)
{
	int		n;
	int		i;
	char	*str;

	n = 0;
	i = 0;
	while (dest[n] != '\0')
	{
		n++;
	}
	while (src[i] != '\0')
	{
		dest[n] = src[i];
		n++;
		i++;
	}
	dest[n] = '\0';
	str = src;
	return (dest);
}

int		count_str_size(char **strs, int size, char *sep)
{
	int		i;
	int		j;
	int		size_plus;
	int		size_all;
	int		seplen;

	i = 0;
	j = 0;
	size_all = 0;
	seplen = 0;
	while (sep[seplen])
		seplen++;
	while (strs[i] && i < size)
	{
		while (strs[i][j])
			j++;
		size_all += j;
		j = 0;
		i++;
	}
	size_plus = (size_all + (seplen * (i - 1)));
	return (size_plus);
}

int		count_str(char **strs, int size)
{
	int		i;

	i = 0;
	while (strs[i] && i < size)
		i++;
	return (i);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*ret;
	int		size_plus;
	int		i;

	ret = "";
	if (size == 0)
	{
		ret = (char *)malloc(sizeof(char) * 1);
		ret = "\0";
		return (ret);
	}
	size_plus = count_str_size(strs, size, sep);
	ret = get_memor(size_plus);
	i = 0;
	while (strs[i])
	{
		if (i < size)
			ft_strcat(ret, strs[i]);
		if (i < count_str(strs, size) - 1)
			ft_strcat(ret, sep);
		i++;
	}
	return (ret);
}
