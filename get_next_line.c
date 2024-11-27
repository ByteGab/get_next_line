/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gafreire <gafreire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 16:52:08 by gafreire          #+#    #+#             */
/*   Updated: 2024/11/27 21:47:30 by gafreire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char    *line(char *buffer, int fd)
{
    size_t  i;
    int     z;
    char    *linea;
    
    z = 0;
    i = read(fd,buffer, BUFFER_SIZE);
    if (i <= 0)
    {
        return(NULL);
    }
    while(buffer[z] != '\0' && buffer[z] != '\n')
    {
        linea[z] = buffer[z];
        z++;
    }
    buffer = ft_strlen(buffer) - ft_strlen(linea);
}

int get_next_line(int fd)
{
        
}

// int main ()
// {
//     // // open
//     // open("",O_READ)
//     // // read
//     // ssize_t read(int fd, void *buf,size_t count);
// }