#include<stdio.h>
int main(void)
{
    int nums[1000];
    int len = 0;
    int i = len;

    printf("请输入进行选择排序的数字（输入非数字停止输入）：\n");
    while(scanf("%d", &nums[len]))
        len++;

    for (i = 0; i < len; i++)
    {
        int max = i;
        int j = i;
        while (j < len)
        {
            max = nums[j] > nums[max]? j : max;
            j++;
        }
        int temp = nums[i];
        nums[i] = nums[max];
        nums[max] = temp;
    }
    printf("\n排序的结果为:\n");
    for (;len > 0; len--)
        printf("%d\n", nums[len-1]);

    return 0;
}
