/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nitsatay <nitsatay@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/12 09:06:14 by nitsatay          #+#    #+#             */
/*   Updated: 2026/11/12 09:08:06 by nitsatay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_div_mod(int a, int b, int *div, int *mod)
{
    if (b != 0)
    {
        *div = a / b;
        *mod = a % b;
    }
}

int main()
{
    int a = 10;
    int b = 3;
    int div, mod;

    ft_div_mod(a, b, &div, &mod);

    // After the function call, div should be 3 and mod should be 1
    return 0;
}