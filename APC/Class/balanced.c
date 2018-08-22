#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
	char data;
	struct node* next;
}node;

node* createNewNode()
{
	node* nn = (node*)malloc(sizeof(node));
	return nn;
}
void addAtBeg(node **h, int d)
{
	node *nn = createNewNode();
	nn->data = d;
	nn->next = *h;
	*h = nn;
}
void addAtLast(node **h, char d)
{
	node *nn = createNewNode();
	nn->data = d;
	nn->next=NULL;
	if(*h==NULL)
	{
		*h=nn;
	}
	else
	{
		node *curr = *h;
		while(curr->next)
		{
			curr=curr->next;
		}
		curr->next=nn;
	}	
}
void addAtPosition(node **h,int d, int pos)
{
	if(pos==1)
	{
		addAtBeg(h,d);
	}
	else
	{
		node *curr=*h;
		int p=1;
		while(p<pos-1&&curr)
		{
			curr=curr->next;
			p++;	
		}
		if(curr==NULL)
		{
			printf("Position does not exist\n");
		}
		else
		{
			node *nn = createNewNode();
			nn->next = curr->next;
			curr->next = nn;
		}
	}
}

int deleteAtBeg(node **h)
{
	int data;
	if(*h==NULL)
		return -1;
	else
	{
		node *temp = *h;
		*h = (*h)->next;
		data = temp->data;
		free(temp);
		temp=NULL;	
	}
	return data;	 
}
char deleteAtLast(node **h)
{
	char data;
	node *temp;
	if(*h==NULL)
		return 0;
	else if((*h)->next==NULL)
	{
		deleteAtBeg(h);
	}
	else
	{
		node *curr = *h;
		while(curr&&curr->next&&curr->next->next)
		{
			curr = curr->next;
		}
		if(curr==NULL) {
			printf("Position doesnot exist\n");
		}
		else {
			temp = curr->next;
			data = temp->data;
			curr->next = NULL;
			free(temp);
			temp = NULL;
		}
	}
	return data;
}
void push(node **h, int d)
{
	addAtBeg(h, d);
}

char pop(node **h)
{
	return deleteAtBeg(h);
}

char peek(node **h)
{
	return (*h)->data;
}
int isEmpty(node **h)
{
	return !h;
}
int balanced(node **h, char *str, int len)
{
	int i=0,j=0;
	char open[] = {'{','[','<','('};
	char close[] = {'}',']','>', ')'};
	while(i<len) {
		j=0;
		while(j<4) {
			if(str[i]==close[j]) {
				break;
			}
			j++;		
		}
		if(j!=4&&peek(h)==open[j]) {
			pop(h);	
		}
		else {
			push(h, str[i]);
		}
		i++;
	}
	if(pop(h)==0)
		return 1;
	else
		return 0;
}

int main()
{
	node *head = NULL;
//	push(&head, 10);
//	push(&head, 20);
//	push(&head, 30);
//	push(&head, 40);
//	push(&head, 50);
//	printf("%d\n", pop(&head));
//	printf("%d\n", peek(&head));
	int n;
	printf("Enter the size of string\n");
	scanf("%d", &n);
	char *str = (char*)malloc((n+1)*sizeof(char));
	printf("Enter String\n");
	scanf("%s", str);	
	printf("%d\n", balanced(&head, str, n));
	return 0;

}