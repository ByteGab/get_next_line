/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreire <gafreire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 16:52:11 by gafreire          #+#    #+#             */
/*   Updated: 2024/12/12 19:40:32 by gafreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	size;
	char	*mem;
	int			i;
	int			j;

	size = ft_strlen(s1) + ft_strlen(s2);
	mem = (char *)malloc(size + 1);
	if (mem == NULL)
		return (NULL);
	i = 0;
	while (s1 && s1[i] != '\0')
	{
		mem[i] = s1[i];
		i++;
	}
	j = i;
	i = 0;
	while (s2 && s2[i] != '\0')
	{
		mem[j] = s2[i];
		j++;
		i++;
	}
	mem[j] = '\0';
	return (mem);
}
char	*ft_strdup(const char *s)
{ 
	char	*mem;
	size_t	size;

	size = ft_strlen(s) + 1;
	mem = (char *)malloc(size);
	if (mem != NULL)
		ft_strlcpy(mem, s, size);
	return (mem);
}

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (unsigned char)c)
			return ((char *)&s[i]);
		i++;
	}
	if ((unsigned char)c == '\0')
		return ((char *)&s[i]);
	return (NULL);
}
