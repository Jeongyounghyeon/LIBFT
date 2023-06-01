## LIBFT
여러 함수들로 구성된 Library
<br>

## Description
c언어 char, string, list 조작에 관련된 함수와 구조체가 포함된 정적 라이브러리
<details>
<summary>iswhat</summary>
    int ft_isprint(int c);<br>
    int ft_isdigit(int c);<br>
    int ft_isascii(int c);<br>
    int ft_isalpha(int c);<br>
    int ft_isalnum(int c);<br>
</details>

<details>
<summary>string</summary>
    size_t  ft_strlen(const char *s);<br>
    size_t  ft_strlcpy(char *dst, const char *src, size_t dstsize);<br>
    size_t  ft_strlcat(char *dst, const char *src, size_t dstsize);<br>
    char    *ft_strchr(const char *s, int c);<br>
    char    *ft_strrchr(const char *s, int c);<br>
    char    *ft_strjoin(char const *s1, char const *s2);<br>
    void    ft_striteri(char *s, void (*f)(unsigned int, char*));<br>
    char    *ft_strdup(const char *s1);<br>
    char    *ft_strmapi(char const *s, char (*f)(unsigned int, char));<br>
    int     ft_strncmp(const char *s1, const char *s2, size_t n);<br>
    char    *ft_strnstr(const char *haystack, const char *needle, size_t len);<br>
    char    *ft_substr(char const *s, unsigned int start, size_t len);<br>
    char    *ft_strtrim(char const *s1, char const *set);<br>
</details>

<details>
<summary>utils</summary>
    void    *ft_memset(void *b, int c, size_t len);<br>
    void    *ft_memmove(void *dst, const void *src, size_t len);<br>
    void    *ft_memchr(const void *s, int c, size_t n);<br>
    void    *ft_memcpy(void *dst, const void *src, size_t n);<br>
    int     ft_memcmp(const void *s1, const void *s2, size_t n);<br>
    void    ft_bzero(void *s, size_t n);<br>
    void    *ft_calloc(size_t count, size_t size);<br>
    int     ft_putchar_fd(char c, int fd);<br>
    int     ft_putstr_fd(char *s, int fd);<br>
    int     ft_putendl_fd(char *s, int fd);<br>
    void    ft_putnbr_fd(int n, int fd);<br>
    int     ft_toupper(int c);<br>
    int     ft_tolower(int c);<br>
    int     ft_atoi(const char *str);<br>
    char    *ft_itoa(int n);<br>
    char    **ft_split(char const *s, char c);<br>
</details>

<details>
<summary>string</summary>
t_list  *ft_lstnew(void *content);<br>
int     ft_lstsize(t_list *lst);<br>
t_list  *ft_lstlast(t_list *lst);<br>
void    ft_lstadd_front(t_list **lst, t_list *new);<br>
void    ft_lstadd_back(t_list **lst, t_list *new);<br>
void    ft_lstdelone(t_list *lst, void (*del)(void *));<br>
void    ft_lstclear(t_list **lst, void (*del)(void *));<br>
void    ft_lstiter(t_list *lst, void (*f)(void *));<br>
t_list  *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));<br>
</details>

<a href="https://www.notion.so/Libft-0708a200348e40229127ec170b35df38?pvs=4">자세한 함수 설명 링크</a>
<br>

## 필요한 컴파일 package
- gcc, make (in Linux)
```bash
apt-get update
apt install build-essential
```
기본적인 make와 cc를 포함한 gcc install
<br>

## 실행 방법 (in Linux)
- libft의 archive file 생성
    1. git clone 또는 zip으로 생성된 파일의 root공간에서 make 실행
    ```bash
    make
    ```

    2. 직접 만든 c file을 libft.a와 함께 컴파일 
    ```bash
    gcc 'libft를 사용한 c file' 'libft.a 경로' -o '생성파일 이름' -I 'libft root 위치'/src/include
    ```
- example
    1. c file 컴파일
    ```bash
    cc test.c libft.a -o test -I ./src/include
    ```

    2. 만들어진 test 실행파일 실행
    ```bash
    ./test
    ```

<br>

## TEST
- Test c file
    ```c
    #include <libft.h>

    int main()
    {
        char    *str1, *str2, *str3, *tmp, *res;

        str1 = ft_strdup("successful ");
        str2 = ft_strdup("including ");
        str3 = ft_strdup("library\n");
        tmp = ft_strjoin(str1, str2);
        res = ft_strjoin(tmp, str3);

        ft_putstr_fd("libft library test\n", 1);
        ft_putstr_fd("successful including library\n", 1);

        exit(0);
    }
    ```

