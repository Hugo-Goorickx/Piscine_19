/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgoorick <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 15:09:39 by hgoorick          #+#    #+#             */
/*   Updated: 2021/07/13 13:48:48 by hgoorick         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	while ((*s1 == *s2) && *s1 && n)
	{
		++s1;
		++s2;
		--n;
	}
	if (n == 0)
		return (0);
	else
		return (*(unsigned char *)s1 - *(unsigned char *)s2);
}
