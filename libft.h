/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qmattor <qmattor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/03 13:48:22 by qmattor           #+#    #+#             */
/*   Updated: 2020/03/10 19:23:59 by qmattor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIBFT_H
# define FT_LIBFT_H
# include <stdlib.h>
# include <unistd.h>

typedef struct			s_list
{
	void				*content;
	size_t				content_size;
	struct s_list		*next;
}						t_list;

typedef struct			s_arraylist
{
	void				**array;
	char				*inuse;
	size_t				elesize;
	size_t				arraysize;
}						t_arraylist;

t_arraylist				*ft_arrylstnew(size_t size);
int						ft_arrylstdel(t_arraylist *lst, long int spot);
void					ft_benull(void **arr, size_t size);
int						ft_arrylstadd(long int spot, void *elem,
						t_arraylist *arrylst);
int						ft_atoi(char *str);
void					*ft_bzero(void *str, size_t n);
int						ft_countforstrings(char identifier, char *src);
int						ft_isalnum(int c);
int						ft_isalpha(int c);
int						ft_isascii(int c);
int						ft_isdigit(int c);
int						ft_isprint(int c);
int						ft_iswhtspc(char c);
char					*ft_itoa(int n);
void					*ft_memalloc(size_t size);
void					*ft_memccpy(void *dest, void *src, int n, size_t n2);
void					*ft_memchr(const void *src, int c, size_t n);
int						ft_memcmp(const void *arg1, const void *arg2, size_t n);
void					*ft_memcpy(void *dest, const void *src, size_t n);
void					ft_memdel(void **ap);
void					*ft_memmove(void *dest, void *src, size_t n);
void					*ft_memset(void *str, int c, size_t n);
void					ft_putchar_fd(char c, int fd);
void					ft_putchar(char c);
void					ft_putendl_fd(char const *s, int fd);
void					ft_putendl(char const *s);
void					ft_putnbr_fd(int n, int fd);
void					ft_putnbr(int n);
void					ft_putstr_fd(char const *s, int fd);
void					ft_putstr(char const *s);
char					*ft_strcat(char *dest, char *src);
char					*ft_strchr(const char *str, int c);
void					ft_strclr(char *s);
int						ft_strcmp(char *str1, char *str2);
char					*ft_strcpy(char *dest, char *src);
void					ft_strdel(char **as);
char					*ft_strdup(char *str);
int						ft_strequ(char const *s1, char const *s2);
void					ft_striter(char *s, void (*f)(char *));
void					ft_striteri(char *s, void (*f)(unsigned int, char *));
char					*ft_strjoin(char const *s1, char const *s2);
size_t					ft_strlcat(char *dest, const char *src, size_t size);
int						ft_strlen(char *str);
char					*ft_strmap(char const *s, char (*f)(char));
char					*ft_strmapi(char const *s,
						char (*f)(unsigned int, char));
char					*ft_strncat(char *dest, char *src, size_t n);
int						ft_strncmp(char *str1, char *str2, size_t n);
char					*ft_strncpy(char *dest, char *src, size_t n);
int						ft_strnequ(char const *s1, char const *s2, size_t n);
char					*ft_strnew(size_t size);
int						ft_strnlen(char *str, int n);
char					*ft_strnstr(char *haystack, char *needle, size_t n);
char					*ft_strrchr(const char *str, int c);
char					**ft_strsplit(char const *s, char c);
char					*ft_strstr(char *haystack, char *needle);
char					*ft_strsub(char const *s,
						unsigned int start, size_t len);
char					*ft_strtrim(char const *s);
int						ft_tolower(int c);
int						ft_toupper(int c);
void					ft_wowthatsgross(char **tab, int *z,
						const char *s, char c);
t_list					*ft_lstnew(void const *content, size_t content_size);
void					ft_lstadd(t_list **alst, t_list *new);
void					ft_lstdelone(t_list **alst,
						void (*del)(void *, size_t));
void					ft_lstiter(t_list *lst, void (*f)(t_list *elem));
void					ft_lstdel(t_list **alst, void (del)(void *, size_t));
t_list					*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));
t_list					*ft_searchlst(t_list *lst, int fd);
void					ft_appendlst(t_list *lst, char *buf, int fd);
void					ft_strrev(char *str);
#endif
