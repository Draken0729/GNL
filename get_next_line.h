/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qbaret <qbaret@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 13:31:47 by qbaret            #+#    #+#             */
/*   Updated: 2024/11/26 16:41:08 by qbaret           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET
# define GET

#ifndef BUFFER_SIZE
# define BUFFER_SIZE 1024
#endif

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

char *get_next_line(int fd);
int	ft_strcpy(char *dest, const char *src);

#endif
