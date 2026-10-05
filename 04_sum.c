#include <stdio.h>

int main(void)
{
    int number;
    int sum = 0;
    int i;

    printf("정수를 입력하시오: ");
    scanf("%d", &number);

    for (i = 1; i <= number; i++)
    {
        sum = sum + i;
    }

    printf("1부터 %d까지의 합은 %d입니다.\n", number, sum);

    return 0;
}