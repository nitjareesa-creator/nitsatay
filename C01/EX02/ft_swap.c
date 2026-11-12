/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nitsatay <nitsatay@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/12 09:01:50 by nitsatay          #+#    #+#             */
/*   Updated: 2026/11/12 09:07:14 by nitsatay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    ft_swap(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int x = 5;
    int y = 10;

    ft_swap(&x, &y);

    // After swapping, x should be 10 and y should be 5
    return 0;
}