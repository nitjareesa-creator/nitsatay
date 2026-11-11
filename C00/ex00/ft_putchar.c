/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nitsatay <nitsatay@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 11:28:39 by nitsatay          #+#    #+#             */
/*   Updated: 2026/11/11 11:32:31 by nitsatay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_putchar(char c);

void ft_putchar(char c)
{
    write(1, &c, 1);
}

int main()
{
    char a;
    a = 'Z';
    ft_putchar(a);
}