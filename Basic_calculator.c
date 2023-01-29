#include <stdio.h>
int main()
{
    char wish;
    float num1, num2, result;
    int flag = 1;
    printf(" Enter any arithmetical operator first like, - , + , * ,/ :");
    scanf("%c", &wish);
    printf("Now enter number 1:");
    scanf("%f", &num1);
    printf("Now enter number 2:");
    scanf("%f", &num2);

    switch (wish)
    {
    case '+':
        result = num1 + num2;
        break;
    case '-':
        result = num1 - num2;
        break;
    case '/':
    {
        if (num2 == 0)
        {
            flag = 0;
        }
        else
        {
            result = num1 / num2;
        }
        break;
    }
    case '*':
        result = num1 * num2;
        break;
    default:
        printf("error");
        break;
    }
    if (flag == 1)
    {
        printf("%f %c %f =%f", num1, wish, num2, result);
    }
    else
    {
        printf("%f %c %f = undefined", num1, wish, num2);
    }
}