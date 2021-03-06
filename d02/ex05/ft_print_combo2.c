/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayellin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/04 03:56:13 by ayellin           #+#    #+#             */
/*   Updated: 2019/07/04 07:28:36 by ayellin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_putchar(char c);

void ft_print_comb2(void)
{
	int n1;
	int n2;
	int a;
	int b;
	int c;
	int d;
	
	n1 = 0;
	n2 = 1;
	while (!(n1 == 99 && n2 == 100))
	{
		a = n1 / 10;
		b = n1 % 10;
		c = n2 / 10;
		d = n2 % 10;
		n2++;
		if (n2 == 100) {
			n1 += 1;
			n2 = n1 + 1;
		}
		ft_putchar(a + 48);
		ft_putchar(b + 48);
		ft_putchar(' ');
		ft_putchar(c + 48);
		ft_putchar(d + 48);
		if (!(n1 == 99 && n2 == 100))
		{	
			ft_putchar(',');
			ft_putchar(' ');	
		}
	}
}
