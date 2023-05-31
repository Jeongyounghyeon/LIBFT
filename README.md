## LIBFT
여러 함수들로 구성된 Library
<br>

## Description
c언어 char, string, list 조작에 관련된 함수와 구조체가 포함된 정적 라이브러리
  
## 실행 방법 (in Mac)

- libft의 archive file 생성
	1. git clone 또는 zip으로 생성된 파일의 root공간에서 make 실행
	```bash
	make
	```

	2. 직접 만든 c file을 libft.a와 함께 컴파일 
	```bash
	gcc 'libft를 사용한 c file' libft.a -o '생성파일 이름' -I'libft root 위치'./src/include
	```
	example
	```bash
	gcc test.c libft.a -o test -I./src/include 
	```

## TEST
- Test c file
	```c
	#include <stdio.h>
	#include <libft.h>

	int main()
	{
		char	*str1, *str2, *str3, *tmp, *res;

		str1 = ft_strdup("successful ");
		str2 = ft_strdup("including ");
		str3 = ft_strdup("library\n");
		tmp = ft_strjoin(str1, str2);
		res = ft_strjoin(tmp, str3);

		printf("libft library test\n");
		printf("successful including library\n");

		exit(0);
	}
	```