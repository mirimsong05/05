#include <stdio.h>

int main(void)
{
    int answer = 59;
    int number;
    int count = 0;

    do
    {
        printf("숫자를 입력하시오: ");
        scanf("%d", &number);

        count++;

        if (number > answer)
        {
            printf("정답보다 큽니다.\n");
        }
        else if (number < answer)
        {
            printf("정답보다 작습니다.\n");
        }

    } while (number != answer);

    printf("정답입니다!\n");
    printf("시도 횟수: %d회\n", count);

    return 0;
}