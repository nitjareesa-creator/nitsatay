/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nitsatay <nitsatay@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/12 09:09:31 by nitsatay          #+#    #+#             */
/*   Updated: 2026/11/12 09:09:32 by nitsatay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_ultimate_div_mod(int *a, int *b)
{
    if (*b != 0)
    {
        int div = *a / *b;
        int mod = *a % *b;
        *a = div;
        *b = mod;
    }
}
int main()
{
    int x = 10;
    int y = 3;

    ft_ultimate_div_mod(&x, &y);

    // After the function call, x should be 3 (10 / 3) and y should be 1 (10 % 3)
    return 0;
}