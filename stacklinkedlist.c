#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
void push();
void pop();
void display();
void peek();
 
 struct node {
      int data;
      struct node *next;
	  };
 
 struct node *top=0;
	 
	
  
 	 
int main()
  {
	int ch,c;
	printf("press1,push\npress2,pop\npress3 display\npress4,peek\n");
	 
	 do{
		 printf("\nenter your choice");
		 scanf("%d",&ch);
		 switch(ch)
		 {
			 case 1:push();
			        break;
			 case 2:pop();
			        break;
			 case 3:display();
			        break; 
			  case 4:peek();
			         break;        
			 default:printf("invalid number");
			         break;
			     }
			 printf("\npress 1 to continue,0 to exit\n");
			 scanf("%d",&c);
			
		 } while(c==1);
	 return 0;
	
	}
	
	
 void push()
	{
		struct node *newnode;
		newnode=(struct node*)malloc(sizeof(struct node));
		printf("\n enter the data ");
		scanf("%d",&newnode->data);
		 newnode->next=top;
		top=newnode;
		
		
		}
		
		void pop()
		{
			struct node *temp;
			if(top==0)
			printf("stack is empty");
			else{
			temp=top;
			top=top->next;
			free(temp);
			}
      }
      void display()
      {
		  struct node *temp;
		  if(top==0)
		  printf("stack is empty");
		  else{
		  temp=top;
		  
		  while(top!=0){
		   printf("%d ",temp->data);
		   temp=temp->next;
		  }
	  }
		  }
		  
		  void peek()
		  {
			  if(top==0)
			  printf("stack is empty");
			  
			  else{
				  printf("%d",top->data);
				  }
			  }




