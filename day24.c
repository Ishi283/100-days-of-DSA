/*Problem: Delete First Occurrence of a Key - Implement using linked list with dynamic memory allocation.

Input:
- First line: integer n
- Second line: n space-separated integers
- Third line: integer key

Output:
- Print the linked list elements after deletion, space-separated

Example:
Input:
5
10 20 30 40 50
30

Output:
10 20 40 50

Explanation:
Traverse list, find first node with key, remove it by adjusting previous node's next pointer.
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
void delete_begin()
{
    s*temp;
    if(head==NULL)
    {
        printf("List is empty");
        return;
    }
   temp=head;
   head=head->next;
   free(temp);
}
void delete(int pos)
{
    s*temp,*prev;
    if(head==NULL)
    {
        printf("List is empty\n");
        return;
    }
    if(pos==1)
    {
        delete_begin();
        return;
    }
    temp=head;
    for(int i=1;i<pos && temp!=NULL;i++)
    {
        prev=temp;
        temp=temp->next;
    }
    if(temp==NULL)
    {
        printf("Invalid position\n");
        return;
    }
    prev->next = temp->next;
    free(temp);
}

int main()
{
    int n,pos;
    printf("Enter the no. of data:");
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        link();
    }

    print();
    printf("\nEnter element to be deleted:");
    scanf("%d",&pos);
    delete(pos);
    print();

    return 0;
}