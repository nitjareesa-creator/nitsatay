/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nitsatay <nitsatay@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/12 09:16:10 by nitsatay          #+#    #+#             */
/*   Updated: 2026/11/12 09:17:48 by nitsatay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putstr(char *str)
{
    while (*str)
    {
        write(1, str, 1);
        str++;
    }
}

void ft_strlen(char *str)
{
    int length = 0;
    while (str[length] != '\0')
    {
        length++;
    }
    // You can use the length variable as needed
}

int main()
{
    char *message = "Hello, World!";
    ft_putstr(message);
    ft_strlen(message);
    return 0;
}