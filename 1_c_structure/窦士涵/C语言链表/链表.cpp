 #include <stdio.h>
 #include <stdlib.h>
 
 struct s_list * insert_nodes(struct s_list * head,int n);
 struct s_list * delete_nodes(struct s_list **headp,int n);
 struct s_list * find_nodes_recursive(struct s_list *head,int n); 
  
 struct s_list{
 	int data;
 	struct s_list *next;
 };
 
 void create_list_v1(struct s_list **headp,int *p)
 {
  struct s_list * loc_head=NULL,*tail;
  if(p[0]==0);
  else{
 	loc_head=(struct s_list *)malloc(sizeof(struct s_list));
 	loc_head->data=*p++;
 	tail=loc_head;
 	while(*p){
 		tail->next=(struct s_list *)malloc(sizeof(struct s_list));
 		tail=tail->next;
 		tail->data=*p++;
	 }
	 tail->next=NULL;
	 
 }
  *headp=loc_head;
  } 
  
int main (void)
{
	struct s_list *head=NULL,*p;
	int s[]={1,2,3,4,5,6,7,8,0};
	create_list_v1(&head,s);
	p=head;
	while(p){
		printf("%d\t",p->data);
		p=p->next;
		
	}
	printf("\n");
	return 0;
  }  


struct s_list * insert_nodes(struct s_list * head,int n)
{
	struct s_list * current=head,*after,*other;
	while(current->data !=n&&current != NULL){
		current=current->next;
	}
	if(!current) return NULL;
	after=current->next;
	other =(struct s_list *)malloc(sizeof(struct s_list));
	scanf("%d",&other->data);
	if(after){
		other->next=after;
		current->next=other;
	}
	else{
		other->next=NULL;
		current->next=other;
	}
	return current;
 } 
 
 struct s_list * delete_nodes(struct s_list **headp,int n)
 {
 	struct s_list * current=*headp,*prior=*headp;
 	while(current->data!=n&&current!=NULL){
 		prior=current;
 		current=current->next;
	 }
	 if (!current){
	 	return NULL;
	 }
	 if (current==*headp){
	 	*headp=current->next;
	 }
	 else{
	 	prior->next=current->next;
	 }
	 free(current);
	 return current;
 }
 
 struct s_list * find_nodes_recursive(struct s_list *head,int n)
 {
 	struct s_list * p=head;
 	if (p){
 		if(p->data==n) return p;
 		else {
 			find_nodes_recursive(p->next,n);
		 }
	 }
	 else return NULL;
 }
