#include <stdio.h>
int stack[100],i,j,choice=0,n,top=-1;
void push();
void pop();
void show();
void main ()
{
    printf(":::::::::Stack operations using Array::::::::\n");

    printf("\nEnter the number of elements in the stack : ");
    scanf("%d",&n);

printf("\n=============================================\n");





















    while(choice != 4)
    {
        printf("\nChose one from the below options :- ");
        printf("\n1.Push\n2.Pop\n3.Show\n4.Exit");
        printf("\nEnter your choice : ");
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
                show();
                break;
            }
            case 4:
            {
                printf("\nExiting....\n");
                break;
            }
            default:
            {
                printf("\nPlease Enter valid choice.\n");
            }
        }
    }
}





void push ()
{
    int data;
    if (top == n )
    printf("\n Overflow");
    else
    {
        printf("Enter the value : ");
        scanf("%d",&data);
        top = top +1;
        stack[top] = data;
    }
}

void pop ()
{
    if(top == -1)
    printf("Underflow");
    else
    top = top -1;
}
void show()
{
    for (i=top;i>=0;i--)
    {
        printf("%d\n",stack[i]);
    }
    if(top == -1)
    {
        printf("Stack is empty");
    }
}
