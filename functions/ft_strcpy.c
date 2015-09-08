/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qle-guen <qle-guen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/08 11:25:53 by qle-guen          #+#    #+#             */
/*   Updated: 2015/09/08 14:09:51 by qle-guen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src);

char	*ft_strcpy(char *dest, char *src)
{
	if (*src == '\0')
	{
		*dest = '\0';
		return (dest);
	}
	else
	{
		*dest = *src;
		return (ft_strcpy(dest + 1, src + 1));
	}
}
