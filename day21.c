/*Problem: Create and Traverse Singly Linked List

Input:
- First line: integer n
- Second line: n space-separated integers

Output:
- Print the result

Example:
Input:
5
10 20 30 40 50

Output:
10 20 30 40 50
*/
#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int data;
    struct node *next;
} s;

s*head = NULL;

s*node()
{
    int a;
    s*newnode = (s*)(malloc(sizeof(s)));
    printf("Enter data: ");
    scanf("%d", &a);
    newnode->data = a;
    newnode->next = NULL;
    return newnode;
}

void link()
{
    if( head == NULL )
    {
        head = node();
        return;
    }
    s*list = node();
    s*temp = head;
    while(temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = list;
}


void print()
{
    s*temp = head;
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
}

int main()
{
    int n;
    printf("Enter the no. of data:");
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        link();
    }

    print();
    return 0;
}