/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreire <gafreire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 17:19:28 by gafreire          #+#    #+#             */
/*   Updated: 2024/11/19 18:43:00 by gafreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE

# include <unistd.h>

int get_next_line (int fd);
char *ft_strjoin (char const *s1, char const *s2);
char	*ft_strdup (const char *s);
size_t	ft_strlen(const char *s); 
    
#endif