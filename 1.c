#include <stdio.h>

int main(void)
{
    int n;

    printf("n = ");
    scanf("%d", &n);

    if ((n & 1) == 0) //訂正理由：条件文(n & 1 == 0)であると、n & (1 == 0)と認識されてしまうため。
    {
        printf("%d は偶数です\n", n);
    }
    else
    {
        printf("%d は奇数です\n", n);
    }
    return 0;
}