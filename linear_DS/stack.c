#include<stdio.h>
int stack[50],choice,n,top,x,i;
void push();
void pop();
void display();
int main()
{
    top=-1;
    printf("\nEnter the size of STACK[MAX=50]: ");
    scanf("%d",&n);
    printf("\nStack using Array");
    printf("\n********************************");
    printf("\n 1.PUSH\n 2.POP\n 3.DISPLAY\n 4.EXIT");
    printf("\n********************************");
    do
    {
        printf("\nEnter the Choice: ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            {
                push();
                break;
            }
            case 2:
            {
                pop();
                break;
            }
            case 3:
            {
                display();
                break;
            }
            case 4: //exit
            {
                printf("\nEXIT.THANK YOU");
                break;
            }
            default:
            {
                printf ("\nPlease Enter a Valid Choice(1/2/3/4)");
            }
        }
    }
    while(choice!=4);
    return 0;
}
void push() //push element in stack
{
    if(top>=n-1)
    {
        printf("\n\tStack OVERFLOW");
        
    }
    else
    {
        printf("Enter a value to be pushed: ");
        scanf("%d",&x);
        top++;
        stack[top]=x;
    }
}
void pop() //pop element from stack
{
    if(top<=-1)
    {
        printf("\nStack UNDERFLOW");
    }
    else
    {
        printf("\nThe popped elements is %d",stack[top]);
        top--;
    }
}
void display() //display stack elements
{
    if(top>=0)
    {
        printf("\nThe elements in STACK \n");
        for(i=top; i>=0; i--)
            printf("\n%d",stack[i]);
        
    }
    else
    {
        printf("\nStack is EMPTY");
    }   
}