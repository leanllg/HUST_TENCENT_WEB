#include <stdio.h>
#include <stdlib.h>
struct LNode
{
    int data;
    struct LNode * next;
};
typedef struct LNode LNode,* LinkList;
void InitList(LinkList *L)
{
    *L = (LinkList*)malloc(sizeof(struct LNode));
    (*L)->next=NULL;
}
int InsertList(LinkList  L,int j,int num)  //在第j个节点后插入新的节点，数据为data
{
    int i;
    LinkList  s = L, tmp;
    for( i = 1;i<j;i++)
    {
        s = s->next;
    }
    if(j<i || !s )
    {
        printf("error");
        return 0;
    }
    else{
        tmp=(LinkList)malloc(sizeof(struct LNode));
        tmp->next = s->next;
        tmp->data = num;
        s->next = tmp;
        return 0;
    }
}
int DeleteList(LinkList  L,int j) //删除第j个节点
{
    int i;
    LinkList  s = L,tmp;
    for(i = 2;i<j;i++)
        s = s->next;
    if(j<i || !(s->next))
    {
        printf("error");
        return 0;
    }
    else{
        tmp = s->next;
        s->next = tmp->next;
        free(tmp);

        return 0;
    }

}
int ResearchList(LinkList * L,int j,int * num)
{
    int i;
    LinkList * s = L;
    for(i = 1;i<j;i++)
        *s = (*s)->next;
    if(j<i || !(*s)->data)
    {
        printf("error");
        return 0;
    }
    else{
        *num = (*s)->data;
        return 0;
    }
}
int main(void)
{
    int length;
    LinkList S;
    InitList(&S);
    S->data=0;
    printf("输入一个数字,程序将创建一个长度为这个数字的链表\n并在其中按顺序储存自然数");
    printf("然后在屏幕上打印这个链表的数据\n");
    scanf("%d",&length);
    for(int i=length;i>0;i--)
    {
        InsertList(S,1,i);
    }
    LinkList tmp = S;
    for(int i = 0;i<length;i++)
    {
        printf("%d ",tmp->data);
        tmp = tmp->next;
    }
    printf("\n输入两个数分别作为插入链表的位置和数据\n"
           "之后程序再次打印这个链表\n");
    int num,e;
    scanf("%d %d",&num,&e);
    InsertList(S,num-1,e);
    tmp = S;
    for(int i = 0;i<length+1;i++)
    {
        printf("%d ",tmp->data);
        tmp = tmp->next;
    }
    printf("\n输入一个数字，程序将删除这个位置并再次打印这个链表\n");
    scanf("%d",&num);
    DeleteList(S,num);
    tmp = S;
    for(int i = 0;i<length;i++)
    {
        printf("%d ",tmp->data);
        tmp = tmp->next;
    }
    printf("\n输入一个数字,程序将查找该位置数据并打印\n");
    scanf("%d",&num);
    int * w;
    ResearchList(&S,num,w);
    printf("%d",*w);

    return 0;
}

