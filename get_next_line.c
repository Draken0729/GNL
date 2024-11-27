/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qbaret <qbaret@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 13:34:11 by qbaret            #+#    #+#             */
/*   Updated: 2024/11/26 17:06:34 by qbaret           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char *get_next_line(int fd)
{
    static char *line;
    int i;
    char buffer[BUFFER_SIZE];
    ssize_t bytes_read;
    
    i = 0;
    bytes_read = read(fd, buffer, sizeof(buffer));
    while (read(fd, buffer, BUFFER_SIZE) > 0)
    {
        if(buffer[i] != '\n')
            i++;
    }
    line = (char *)malloc (sizeof(char) * i);
    if (bytes_read == -1)
    {
        perror("Erreur de lecture");
        return(NULL);
    }
    return 0;
}