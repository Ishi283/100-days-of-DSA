/*Problem: Implement a stack data structure using an array with the following operations: push, pop, and display.

Input:
- First line: integer n (number of operations)
- Next n lines: operation type and value (if applicable)
  - 1 value: push value
  - 2: pop
  - 3: display

Output:
- For display: print stack elements from top to bottom
- For pop: print popped element or 'Stack Underflow'

Example:
Input:
5
1 10
1 20
3
2
3

Output:
20 10
20
10
*/
#include<stdio.h>
#include<stdlib.h> 
#define MAX 5
int stack[MAX];
int top=-1;
void push()
{
    int v;
    if(top==-MAX-1)
    {
        printf("Stack overflow");
    }
    else
    {
        printf("Enter element:");
        scanf("%d",&v);
        top++;
        stack[top]=v;
    }
}
void pop()
{
    if(top==-1)
    {
        printf("Stack underflow");
    }
    else
    {
        printf("Deleted element:%d",stack[top]);
        top--;
    }
}
void display()
{
    if(top==-1)
    {
        printf("Stack underflow");
    }
    else
    {
        for(int i=top;i>=0;i--)
        {
            printf("Elements:%d\n",stack[i]);
        }
    }
}
int main()
{
    int choice;
    while(1)
    {
        printf("\n---------Stack Menu-------\n");
        printf("1.Push\n");
        printf("2.Pop\n");
        printf("3.Display\n");
        printf("4.Exit\n");
        printf("Enter the choice:");
        scanf("%d",&choice);
    switch(choice)
    {
        case 1: push(); break;
        case 2: pop(); break;
        case 3: display(); break;
        case 4: exit(0); break;
        default: printf("invalid choice\n"); break;
    }
    }
    return 0;
}