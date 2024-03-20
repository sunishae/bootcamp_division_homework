/*
    main 함수 안의 내용만 수정해주세요.
    수정할 경우, 자동 채점 프로그램이 제대로 동작하지 않을 가능성이 있습니다.
*/

#include <stdio.h>

int main() {
    char c;
    char vowels[5] = {'a','e','i','o','u'};

    scanf("%c",&c);
    int flag = 0;
    for(int i = 0; i<5; i++){
        if(c == vowels[i]){
            flag = 1;
            break;
        }
    }

    if(flag == 0)   printf("X");
    else            printf("O");   

    return 0;
}