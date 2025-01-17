// 메모리 동적 할당

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int size;
    char *a;
    printf("입력할 주소의 문자열 크기는? : ");
    scanf("%d", &size);
    a = (char *)malloc(sizeof(char)*size); // 메모리 동적 할당
    printf("주소 입력 : ");
    scanf("%s", a);
    printf("입력된 주소는 %s 입니다. \n", a);
    free(a); // 메모리 반납.

    return 0;
}

// void *malloc(size)

// byte 단위로 메모리 할당
// 메모리 첫번째 주소 반환
// void*로 명시해 어떤 형으로든 형 변환 가능
// 초기화 안됨. (memset() 함수로 메모리 초기화)

// calloc() 함수
// malloc과 같지만 메모리 0으로 초기화 가능.
// void * calloc(n, sizeof(int));
// n개만큼 sizeof(int)단위의 메모리 할당

// reaclloc 메모리 재할당
// int* a;
// a = (int *)calloc(5, sizeof(int))
// a = (int *)realloc(a, 10*sizeof(int)) a 메모리 크기를 재할당

// void free(void *p);
// 힙 영역에 할당된 공간은 프로그램 종료시 까지 유지
// 메모리 부족 방지
// 명시적인 반납 필요

// emecmp() 함수
// int memcmp(void *s1, void *s2, size_t n);
// 메모리 내의 데이터를 n byte 만큼 비교
/*
# include <mem.h> // 메모리 관리 함수 헤더파일
    char *s1 = "aaa"
    char *s2 = "bbb"
    int stat;
    stat = memcmp(s1, s2, 3); // s1과 s2의 내용을 3byte 만큼 비교.
    printf("%d", stat);

    s1>s2이면 양수, s1<s2이면 음수, s1==s2이면 0 반환.
    예시에서는 s2가 더 크므로 -1 반환.

*/

// memcpy() 함수
// 메모리의 데이터를 다른 메모리로 복사
// void *memcpy(void *dest, const void *src, size_t n);
// src에서 n byte만큼 dest에 복사

/*
# include <mem.h> 

    char src[] = "123";
    char dest[] = "abcdef";
    char *stat;

    stat = (char*)memcpy(dest, src, strlen(src)); // src의 0인덱스부터 setlen(src)까지 데이터 dest에 복사

    // 결과 : "123def"
*/

// memset() 함수
// 메모리 데이터를 지정한 문자로 채움
// 메모리 초기화나 내용 삭제를 위해 사용
// void *memser(void *s, int c, size_t n);
// 포인터 s가 가리키는 곳을 c값으로 n byte 만큼 채운다.

/*
# include <mem.h> 

char s[] = "1234567890";
memset(s, '*', stelen(s)); // 배열 길이만큼 *로 채운다.

결과 : "**********"
*/


