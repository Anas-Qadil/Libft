#ifndef LIB_FT
#define LIB_FT

void    ft_bzero(void *s, size_t n);
int ft_isalnum(int c);
int ft_isalpha(int c);
int ft_isascii(int c);
int ft_isdigit(int c);
int ft_isprint(int c);
void    *ft_memcpy(void *dest, void *src, size_t n);
void    *ft_memmove(void *dest, const void *src, size_t len);
void    *ft_memset(void *b, int c, size_t len);
char    *ft_strchr(const char *s, int c);
size_t  ft_strlen(const char *s);
char    *ft_strrchr(const char *s, int c);
int	ft_tolower(int c);
int	ft_toupper(int c);

#endif
