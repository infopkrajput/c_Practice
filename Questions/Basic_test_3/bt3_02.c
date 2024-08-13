#include <stdio.h>
#define swap1(a, b) \
    tmp = a;        \
    a = b;          \
    b = tmp;

void swap2(int a, int b)
{
    int tmp;
    tmp = a;
    b = tmp;
    a = b;
}
void swap3(int *a, int *b)
{
    int tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}
int main()
{
    int num1 = 5, num2 = 4, tmp;
    if (num1 > num2)
        swap1(num1, num2);

    if (num1 < num2)
    {
        int temp = num1;
        num1 = num2;
        num2 = temp;
    }
    if (num1 == num2)
    {
        swap3(&num1, &num2);
    }

    printf("%d %d", num1, num2);
    return 0;
}
