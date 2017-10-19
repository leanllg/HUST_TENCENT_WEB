#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct Node{
 int data;
 struct Node *next;
}Node;

/*==========单链表的初始化================*/
/*
*头结点指针数据域设置为空
*/
void initList(Node **pNode){
 *pNode=NULL;
}
/*===========单链表的创建=================*/
/*
*功能实现：通过用户不断输入数据，创建链表
*利用游标俩个指针（p1,p2），将申请下的数据块(存入用户输入数据)，链接起来
*/
Node *create(Node *pHead){
 Node *p1;
 Node *p2;
 p1=p2=(Node *)malloc(sizeof(Node));     //申请内存空间
 memset(p1,0,sizeof(Node));       //存入数据域清空
 scanf("%d",&p1->data);  //将输入的数据用p1指针存入data中
 p1->next=NULL;
 while(p1->data>0){         //输入负数结束
  if(pHead==NULL)
   pHead=p1;
  else
   p2->next=p1;
  p2=p1;
  p1=(Node *)malloc(sizeof(Node));
  memset(p1,0,sizeof(Node));
  scanf("%d",&p1->data);
  p1->next=NULL;
 }
 return pHead;
}
/*=================链表的遍历==================*/
/**
*从头结点开始，不断遍历出数据域的内容将表遍历
*/
void printList(Node *pHead){
 if(NULL==pHead)
  printf("链表为空\n");
 else{
  while(pHead!=NULL){
   printf("%d ",pHead->data);
   pHead=pHead->next;
  }
 }
 printf("\n");
}
/*===============插入节点==================*/
/**
*Node **pNode 传入头结点空间地址
*int i 传入要插入的结点位置
*/
void insert_data(Node **pNode,int i){
 Node *temp;
 Node *target;
 Node *p;
 int item;
 int j=1;
 printf("输入要插入的节点值:");
 scanf("%d",&item);
 target=*pNode;
 for(;j<i-1;target=target->next,++j);  //不断移动target位置，到要插入结点位置，
 temp=(Node *)malloc(sizeof(Node));   //申请内存空间
 temp->data=item;       //存入要存入的数据位置
 p=target->next;
 target->next=temp;
 temp->next=p;
}
/*===============删除节点====================*/
/**
*删除结点后，释放内存空间free(temp)
*/
void delete_data(Node **pNode,int i){
 Node *target;
 Node *temp;
 int j=1;
 target=*pNode;
 for(;j<i-1;target=target->next,++j);
 temp=target->next;
 target->next=temp->next;
 free(temp);
}
/*===============查找结点====================*/
int search_data(Node *pNode,int elem){
 Node *target;
 int i=1;
 for(target=pNode;target->data!=elem && target->next!=NULL;++i,target=target->next);
 if(target->next==NULL)
  return 0;
 else
  return i;/**这里还是不太懂....................*/

}
int main(){
 int i;
 Node *pHead=NULL;
 initList(&pHead);
 pHead=create(pHead);
 printList(pHead);
 printf("输入插入节点位置\n");
 scanf("%d",&i);
 insert_data(&pHead,i);
 printList(pHead);
 printf("输入删除节点位置\n");
 scanf("%d",&i);
 delete_data(&pHead,i);
 printList(pHead);
 printf("输入查找节点\n");
 scanf("%d",&i);
 printf("节点所在位置：%d",search_data(pHead,i));
 return 0;
}
