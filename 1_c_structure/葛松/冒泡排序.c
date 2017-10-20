#include<stdio.h>
int main(void)
{
    int i = 0;
    int temp, j;
    int nums[1000];
    printf("请输入需要进行冒泡排序的一系列数字:（输入非数字退出输入）\n");
    while (scanf("%d", &nums[i++]))
        continue;
    int len = i - 1;
    for (; i >=0; i--)
    {
        for (j = 0; j <=i; j++)
        {
            if (nums[j] > nums[j+1])
            {
                temp = nums[j];
                nums[j] = nums[j+1];
                nums[j+1] = temp;
            }
        }
    }
    printf("\n排序结果为：\n");
    for (; len > 0; len--)
        printf("%d\n", nums[len -1]);
    return 0;
}
