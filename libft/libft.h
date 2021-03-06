/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rolevy <rolevy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/11 12:11:05 by rolevy            #+#    #+#             */
/*   Updated: 2017/04/24 17:34:06 by rolevy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <string.h>

typedef struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

/*
** Character nature
*/

int					ft_isascii(int c);
int					ft_isdigit(int c);
int					ft_isalpha(int c);
int					ft_isprint(int c);
int					ft_isalnum(int c);

/*
**	String + Character Conversion
*/

int					ft_toupper(int c);
int					ft_tolower(int c);
char				*ft_itoa(int n);
int					ft_atoi(const char *str);

/*
** Move strings
*/

char				*ft_strcpy(char *dest, const char *src);
char				*ft_strncpy(char *dest, const char *src, size_t n);
char				*ft_strcat(char *dest, const char *src);
char				*ft_strncat(char *dest, const char *src, size_t n);
size_t				ft_strlcat(char *dest, const char *src, size_t n);
char				*ft_strchr(const char *str, int c);
char				*ft_strrchr(const char *str, int c);
char				*ft_strstr(const char *str, const char *to_find);
char				*ft_strnstr(const char *str, const char *to_find, size_t n);
char				*ft_strdup(const char *str);
char				*ft_strndup(const char *src, size_t n);

/*
**	String compair
*/

int					ft_strcmp(const char *str1, const char *str2);
int					ft_strncmp(const char *str1, const char *str2, size_t n);
int					ft_strequ(char const *s1, const char *s2);
int					ft_strnequ(char const *s1, const char *s2, size_t n);
int					ft_memcmp(const void *str1, const void *str2, size_t n);
size_t				ft_strlen(const char *str);

/*
** Display
*/

void				ft_putchar(char c);
void				ft_putstr(char const *s);
void				ft_putendl(char const *s);
void				ft_putnbr(int n);
void				ft_putchar_fd(char c, int fd);
void				ft_putstr_fd(char const *s, int fd);
void				ft_putendl_fd(char const *s, int fd);
void				ft_putnbr_fd(int n, int fd);

/*
** String + Memory allocation
*/

void				*ft_memalloc(size_t size);
void				*ft_memset(void *str, int c, size_t n);
void				ft_memdel(void **ap);
char				*ft_strnew(size_t size);
void				ft_strclr(char	*s);
void				ft_strdel(char **ap);
void				ft_bzero(void *str, size_t n);

/*
** string modification
*/

char				*ft_strtrim(char const *s);
char				**ft_strsplit(char const *s, char c);
char				*ft_strsub(char const *s, unsigned int start, size_t len);
char				*ft_strjoin(char const *s1, char const *s2);

/*
** Memory Modification
*/

void				*ft_memcpy(void *str1, const void *str2, size_t n);
void				*ft_memcpy_rev(void *str1, const void *str2, size_t n);
void				*ft_memccpy(void *str1, const void *str2, int c, size_t n);
void				*ft_memchr(const void *str, int c, size_t n);
void				*ft_memmove(void *str1, const void *str2, size_t n);

/*
** Pointers to functions
*/

void				ft_striter(char *s, void (*f)(char *));
void				ft_striteri(char *s, void (*f)(unsigned int, char *));
char				*ft_strmap(char const *s, char (*f)(char));
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));

/*
** List
*/

t_list				*ft_lstnew(void const *content, size_t content_size);
void				ft_lstdelone(t_list **alst, void (*del)(void *, size_t));
void				ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void				ft_lstadd(t_list **alst, t_list *new);
void				ft_lstiter(t_list *lst, void (*f)(t_list *elem));
t_list				*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));

/*
** Math
*/

int					ft_abs(int nb);
int					ft_sqrt(int nb);
int					ft_power(int nb, int power);

#endif
