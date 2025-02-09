/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aibn-che <aibn-che@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 20:18:18 by aibn-che          #+#    #+#             */
/*   Updated: 2023/11/14 10:28:30 by aibn-che         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>
// #include <fcntl.h>

void	ft_putchar_fd(char c, int fd)
{
	if (fd == -1)
		return ;
	write(fd, &c, 1);
}

// int main()
// {
// 	char buffer[4];
// 	int fd = open("file.txt", O_RDONLY);

// 	if (fd == -1)
// 		printf("open faild");

// 	int bytes_read = (int)read(fd, buffer, sizeof(buffer));
// 	if (bytes_read == -1)
// 		printf("faild reading");
// 	buffer[bytes_read] = '\0';

// 	ft_putchar_fd(buffer[0], 1);
// 	ft_putchar_fd('\n', 1);

// 	printf("%s", buffer);
// 	close(fd);
// }