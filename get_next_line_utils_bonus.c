#include "get_next_line_bonus.h"

static size_t	ft_strlen(char const *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	i;
	size_t	u;

	i = 0;
	u = 0;
	str = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!str)
		return (NULL);
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	while (s2[u])
	{
		str[i] = s2[u];
		i++;
		u++;
	}
	str[i] = '\0';
	free((char *)s1);
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

char	*ft_strdup(const char *str)
{
	char	*new_str;
	char	*new_str2;

	new_str = malloc(sizeof(char) * (ft_strlen(str) + 1));
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
