#include <stdio.h>
int main(int argc, char const *argv[])
{
    /************************
      Pointer Array
    ************************/

   char *pa[5];
   pa[0] = "ELECTRONICS"; // 11words + '\0' = 12 공간 차지
   pa[1] = "DATA"; // 4 words + '\0' = 5
   pa[2] = "PROCESSING"; // 11
   pa[3] = "SYSTEM"; // 7
   pa[4] = "0";

   for(int i = 0; i < 4; i++){
       printf("pa[%d] : %d (%d) = \"%s\"\n",i , pa[i], (pa[i+1] - pa[i]), pa[i]);
   }

    //pa[0] : 4214884 (12) 
    //pa[1] : 4214896 (5 )
    //pa[2] : 4214901 (11) 
    //pa[3] : 4214912 (7 )

    // 2차원 배열과 기능은 동일하지만 배열마다 차지하는 메모리 크기가 다르므로 절약효과
    // 2차원 배열의 경우 pa[4][12] : 총 48. 포인터배열 : 12 + 5 + 11+ 7 : 35

    int a[] = {1,2,3};
    int b[] = {4,5,6};

    int *parr[2]; // 포인터 배열 선언
    parr[0] = a; // 배열 a의 시작주소를 전달
    parr[1] = b; // 배열 b의 시작주소를 전달

    printf("*(parr[0]) = %d \n", *(parr[0])); // 1
    printf("*(parr[0] + 1 ) = %d \n", *(parr[0] + 1)); // parr[0]의 주소에 + 1 => 2
    printf("*(parr[1]) = %d \n", *(parr[1])); // 4
    printf("*(parr[1] + 15 ) = %d \n", *(parr[1]) + 15); // 배열 값 + 15 => 19
    
    return 0;
}
