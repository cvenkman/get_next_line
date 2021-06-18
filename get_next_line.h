#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stddef.h>
# include <fcntl.h>
# include <stdlib.h>
# include <unistd.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif

int		get_next_line(const int fd, char **line);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strdup(const char *str);
char	*ft_strchr(const char *s, int c);
char	*ft_strcpy(char *dst, const char *src);
typedef struct s_list
{
	int				fd;
	char			*ost;
	struct s_list	*next;
}				t_list;
t_list	*clear_element(t_list *ptr, t_list **head);
#endif
