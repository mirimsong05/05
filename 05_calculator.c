#include <stdio.h>

int main(void)
{
    int num1, num2;
    char op;

    printf("계산식을 입력하시오: ");
    scanf("%d %c %d", &num1, &op, &num2);

    switch (op)
    {
    case '+':
        printf("%d + %d = %d\n", num1, num2, num1 + num2);
        break;

    case '-':
        printf("%d - %d = %d\n", num1, num2, num1 - num2);
        break;

    case '*':
        printf("%d * %d = %d\n", num1, num2, num1 * num2);
        break;

    case '/':
        printf("%d / %d = %d\n", num1, num2, num1 / num2);
        break;

    default:
        printf("잘못된 연산자입니다.\n");
        break;
    }

    return 0;
}