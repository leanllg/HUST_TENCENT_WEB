#include<stdio.h>
int main(void)
{
    int i, j, temp;
    int len = 0;
    int nums[1000];
    printf("请输入需要进行插入排序的数字（非数字停止输入）：\n");
    while (scanf("%d", &nums[len]))
        len++;
    for (i = 0; i < len - 1; i++)
    {
        temp = nums[i+1];
        for (j = i; j >= 0 && nums[j] < temp; j--)
            nums[j+1] = nums[j];
        nums[j+1] = temp;
    }
    printf("\n排序结果如下：\n");
    for (;len > 0; len--)
        printf("%d\n",nums[len-1]);
    return 0;
}
