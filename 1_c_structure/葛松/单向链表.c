#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct list{
    struct list *next;
    char name[30];//用户名称
    char addr[50];//地址
    char num[8];//号码
}user;

void insert(user *h);
void edit(user *h);
void del(user *h);
void S_byName(user *h);
void S_byNum(user *h);
void display(user *h);

int main()
{
    int flag;
    user *head=(user *)malloc(sizeof(user));
    head->next=NULL;
    while(1)
    {
        printf("电话号码目录系统\n");
        printf("    1、添加新电话用户信息\n");
        printf("    2、修改电话用户信息\n");
        printf("    3、删除已有电话用户信息\n");
        printf("    4、根据用户名查询电话信息\n");
        printf("    5、根据电话号码查询用户信息\n");
        printf("    6、显示全部用户信息\n");
        printf("    7、退出\n");
        printf("请选择：");
        scanf("%d",&flag);
        if(flag==1)
            insert(head);
        else if(flag==2)
            edit(head);
        else if(flag==3)
            del(head);
        else if(flag==4)
            S_byName(head);
        else if(flag==5)
               S_byNum(head);
          else if(flag==6)
            display(head);
        else if(flag==7)
            return 0;
        else
            printf("输入有误，请重新选择！\n");
    }
}
void insert(user *h)
{
    user *p=(user *)malloc(sizeof(user));
    p->next=h->next;
    h->next=p;
    printf("请输入新增用户名称（最多30个字）：");
    scanf("%s",p->name);
    printf("请输入新增用户的家庭住址(最多50字)：");
    scanf("%s",p->addr);
    printf("请输入新增用户的电话号码（8位数）：");
    scanf("%s",p->num);
    printf("新用户记录成功添加：%s  %s  %s\n\n",p->name,p->addr,p->num);
}
void edit(user *h)
{
    char name[30];
    int flag=0;
    user *lh=h->next;
    printf("输入要修改用户的名称：");
    scanf("%s",name);
    while(lh)
    {
        if(strcmp(name,lh->name)==0)
        {
            flag=1;
            printf("请输入新的名称（30字以内）：");
            scanf("%s",lh->name);
            printf("请输入新的地址（50字以内）:");
            scanf("%s",lh->addr);
            printf("请输入新的号码(8位)：");
            scanf("%s",lh->num);
            printf("用户记录修改成功：%s  %s  %s\n\n",lh->name,lh->addr,lh->num);
            break;
        }
        lh=lh->next;
    }
    if(!flag)
        printf("不存在这样的用户\n\n");
}
void S_byName(user *h)
{
    char name[30];
    int flag=0;
    user *lh=h->next;
    printf("输入要查找的用户名称：");
    scanf("%s",name);
    while(lh)
    {
        if(strcmp(name,lh->name)==0)
        {
            flag=1;
            printf("用户信息为：%s  %s  %s\n\n",lh->name,lh->addr,lh->num);
            break;
        }
        lh=lh->next;
    }
    if(!flag)
        printf("用户名不存在\n\n");
}
void S_byNum(user *h)
{
    char num[30];
    int flag=0;
    user *lh=h->next;
    printf("输入要查找的电话号码：");
    scanf("%s",num);
    while(lh)
    {
        if(strcmp(num,lh->num)==0)
        {
            flag=1;
            printf("用户信息为：%s  %s  %s\n\n",lh->name,lh->addr,lh->num);
            break;
        }
        lh=lh->next;
    }
    if(!flag)
        printf("找不到匹配的号码\n\n");
}
void display(user *h)
{
    user *lh=h->next;
    int i=1;
    while(lh)
    {
        printf("第%d条用户信息:%s  %s  %s\n",i,lh->name,lh->addr,lh->num);
        lh=lh->next;
        i++;
    }
    printf("\n");
}
void del(user *h)
{
    char name[30];
    int flag=0;
    user *lh=h;
    printf("输入要删除的用户名称：");
    scanf("%s",name);
    while(lh->next)
    {
        if(strcmp(name,lh->next->name)==0)
        {
            flag=1;
            printf("删除用户成功：%s  %s  %s\n\n",lh->next->name,lh->next->addr,lh->next->num);
            lh->next=lh->next->next;
            break;
        }
        lh=lh->next;
    }
    if(!flag)
        printf("用户名不存在\n\n");
}
