//Implement stack operations using arrays

#include<stdio.h>

int push(int a[],int top,int e) //push() to insert an element to stack
{
    if (top == 4) //check whether stack is full
    {
        printf("\nError: Stack Overflow\n");
    }
    else
    {
        a[++top]=e; //inserts the element
    }
    return top;
}
int pop(int a[],int top) //pop() to delete an element from stack
{
    if(top == -1) //check whether stack is empty
    {
        printf("\nError: Stack Underflow\n");
    }
    else
    {
        printf("\nDeleted: %d\n",a[top--]); //display the element and decrement top
    }
    return top;
}
void peek(int a[],int top) //peek() to display the element at top
{
	if(top == -1)
	{
		printf("\nStack is empty\n");
	}
	else
	{
		printf("\nValue at top = %d\n",a[top]);
	}
}
void display(int a[],int top) //display all current elements in stack
{
	int i;
    if(top == -1) //check whether stack is empty
    {
        printf("\nStack is empty\n");
    }
    else
    {
        printf("\nStack elements are: \n");
        for(i=0;i<=top;i++)
        {
            printf("%d\t",a[i]); //display each element
        }
        printf("\n");
    }
}
int menu() //menu function for the user to select
{
    int ch;
    printf("\n1. PUSH\n2. POP\n3. PEEK\n4. DISPLAY ALL\n5. EXIT\nEnter you choice: ");
    scanf("%d",&ch);
    return ch;
}
void processStack(int top, int a[]) //handles the user menu and calls appropriate stack operations
{
    int ch,e;
    for(ch=menu();ch!=5;ch=menu())
    {
        switch(ch)
        {
            case 1:
                printf("Enter the value to push: ");
                scanf("%d",&e);
                top = push(a,top,e);
                break;
            
            case 2:
                top = pop(a,top);
                break;
                
            case 3:
            	peek(a,top);
            	break;
                
            case 4:
                display(a,top);
                break;
                
            default:
                printf("Error: Invalid Choice\n");
        }
    }
}
int main() //main() function
{
    int a[5],top=-1;
    printf("STACK OPERATIONS\n");
    printf("----------------\n");
    processStack(top,a);
    return 0;
}

