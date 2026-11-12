/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nitsatay <nitsatay@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/12 09:18:28 by nitsatay          #+#    #+#             */
/*   Updated: 2026/11/12 09:18:49 by nitsatay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_rev_int_tab(int *tab, int size)
{
    int start = 0;
    int end = size - 1;

    while (start < end)
    {
        int temp = tab[start];
        tab[start] = tab[end];
        tab[end] = temp;
        start++;
        end--;
    }
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    ft_rev_int_tab(arr, size);

    // After the function call, arr should be reversed: {5, 4, 3, 2, 1}
    return 0;
}