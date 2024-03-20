/*
    main 함수 안의 내용만 수정해주세요.
    수정할 경우, 자동 채점 프로그램이 제대로 동작하지 않을 가능성이 있습니다.
*/

#include <stdio.h>

int main() {
    int months[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
    int year;
    int month;

    scanf("%d",&year);
    scanf("%d",&month);

    if(((year % 4 == 0) && (year % 100 !=0)) || (year % 400 == 0))
        months[2]++;
    
    printf("%d", months[month]);

    return 0;
}