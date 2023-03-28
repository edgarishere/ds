#include<stdio.h>
#include <stdlib.h>

void push();
void pop();
void display();

void main()
{
    int n;
    printf("\t1 menu \n2 push \n3 pop \n4 display \n5 exit \n");
    do
        {
            printf("\n enter your choice \n");
            scanf("%d",&n);
            switch(n)
            {
                    case 1:
                        push();
                        break;
                    case 2:
                        pop();
                        break;
                    case 3:
                        display();
                        break;
                    case 4:
                        
                        break;
                    default:
                        printf("\n valid choice \n");
                        break;
            }
        }
        while(n!=4);
}
typedef struct node
{
    int data;
    struct node *link;
}n;
n*top=0;
void push()
{
        int item; n*temp;
        printf("enter the item \n");
        scanf("%d",&item);
        temp=(n*)malloc(sizeof(n));
        temp->data=item;
        temp->link=top;
        top=temp;
}
void pop()
{
    n*temp;
    if(top==NULL)
    printf("stack is empty \n");
    else
    {
        temp=top;
    printf("the element deleted=%d \n",temp->data);
    free(temp);
    top=top->link;
    }
}

void display()
{
    n*save;
    if(top==NULL)
        printf("stcak is empty \n");
    else
    {
        save=top;
        printf("the element of the stack are:");
        while(save!=NULL)
        {
            printf("%d\t",save->data);
            save=save->link;
        }
        printf("\n topmost element=%d\n",top->data);
    }
}
        