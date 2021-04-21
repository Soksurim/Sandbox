#include <stdio.h>

int main(int argc, char const *argv[])
{
    /************************
      10_Pointer_to_Pointer
    ************************/

   // 2중포인터 -> 주소 -> 값 (값을 찾아 2번 이동)

   // p   : 기억 공간 주소
   // *p  : 주소 p에 담겨져있는 값.
   // **p : *p의 주소에 담긴 값. int형 자료.

   char a = 'A', *p, **pp;

   p = &a;
   pp = &p;

   printf("**pp = %c\n", **pp);

    return 0;
}

