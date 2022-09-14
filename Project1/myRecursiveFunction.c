#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int re(int a, int b, int c)
{
    int d;
    int z = 0;
    scanf_s("%d", &d);
    if (c == d)
    {
        printf("정답입니다.");
        return 0;//정답이라면 종료
    }
    else
    {
        printf("오답입니다.");
        printf("\n");
        re(a, b, c);// 자기자신을 호출하여 다시 정답을 입력

    }

}

int main()
{
    srand((unsigned int)time(NULL)); //시간에 따라 랜덤수 변경
    int a, b, c;
    a = rand() % 10;// 10 미만의 랜덤한 수를 출력
    b = rand() % 10;// 10 미만의 랜덤한 수를 출력
    if (a == 0)
        a++; //구구단은 1부터 시작함으로 0이라면 1로 출력
    else if (b == 0)
        b++;
    printf("%d x %d = ?", a, b);// 시작전 곱할 수를 보여줌
    printf("\n");
    c = a * b;// 답을 저장
    re(a, b, c); // re함수 호출

    return 0;
}