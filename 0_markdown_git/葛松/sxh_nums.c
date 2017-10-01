#include<stdio.h>
int main(void)
{
    int nums, g, s, b; //创建nums表示水仙花数，g, s, b分别是个位十位百位。
    for (nums = 100; nums <= 999; nums++)
    {
        b = nums / 100;
        s = (nums - b*100) / 10;
        g = nums - b*100 - s*10;
        if (nums == g*g*g + s*s*s + b*b*b)
            printf("%d是水仙花数\n", nums);
    }
    return 0;

}
