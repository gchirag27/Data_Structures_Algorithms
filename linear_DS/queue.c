#include<stdio.h>
int main()
{
    int n;
    printf("\nEnter the size of QUEUE[MAX=50]: ");
    scanf("%d",&n);
    int queue[n],ch=1,front=0,rear=0,i,j=1,x=n;
    printf("\nQueue using Array");
    printf("\n********************************");
    printf("\n1.Insertion \n2.Deletion \n3.Display \n4.Exit");
    printf("\n********************************");
    while(ch)
    {
        printf("\nEnter the Choice: ");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1: //insert element in queue
            if(rear==x)
                printf("\nQueue is FULL");
            else
            {
                printf("\nEnter no %d:",j++);
                scanf("%d",&queue[rear++]);
            }
            break;
        case 2: //delete queue element
            if(front==rear)
            {
                printf("\nQueue is EMPTY");
            }
            else
            {
                printf("\nDeleted Element is %d",queue[front++]);
                x++;
            }
            break;
        case 3: // display queue elements
            printf("\nQueue Elements are:\n");
            if(front==rear)
                printf("\nQueue is EMPTY");
            else
            {
                for(i=front; i<rear; i++)
                {
                    printf("%d",queue[i]);
                    printf("\n");
                }
                break;
        case 4: //exit
            printf("\nEXIT.THANK YOU");
            return 0;
        default:
            printf("Please Enter a Valid Choice(1/2/3/4)");
            }
        }
    }
    return 0;
}