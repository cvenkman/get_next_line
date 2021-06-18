#include "get_next_line.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	i;
	size_t	u;

	i = 0;
	u = 0;
	while (s1[i])
		i++;
	while (s2[u])
		u++;
	str = malloc(sizeof(char) * (i + u + 1));
	i = -1;
	u = -1;
	if (!str)
		return (NULL);
	while (s1[++i])
		str[i] = s1[i];
	while (s2[++u])
		str[i++] = s2[u];
	str[i] = '\0';
	free((char *)s1);
	s1 = NULL;
	return (str);
}

char	*ft_strcpy(char *dst, const char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

t_list	*clear_element(t_list *temp, t_list **first)
{
	t_list	*temp_for_temp;

	temp_for_temp = *first;
	if (temp == *first)
	{
		*first = temp_for_temp->next;
		free(temp);
		return (*first);
	}
	while (temp_for_temp->next != temp)
		temp_for_temp = temp_for_temp->next;
	temp_for_temp = temp;
	free(temp_for_temp);
	return (temp);
}

char	*ft_strdup(const char *str)
{
	char	*new_str;
	char	*new_str2;
	int		i;

	i = 0;
	while (str[i])
		i++;
	new_str = malloc(sizeof(char) * (i + 1));
	new_str2 = new_str;
	if (!new_str)
		return (NULL);
	while (*str)
	{
		*new_str2 = *str;
		new_str2++;
		str++;
	}
	*new_str2 = '\0';
	//free(str);
	return (new_str);
}

char	*ft_strchr(const char *str, int sym)
{
	while (*(unsigned char *)str)
	{
		if (*(unsigned char *)str == sym)
			return ((char *)str);
		str++;
	}
	if (sym == '\0' && *str == '\0')
		return ((char *)str);
	return (0);
}
