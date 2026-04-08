/*Problem: Count Occurrences of an Element in Linked List - Implement using linked list with dynamic memory allocation.

Input:
- First line: integer n (number of nodes)
- Second line: n space-separated integers (linked list elements)
- Third line: integer key (element to be counted)

Output:
- Print the number of times the key appears in the linked list

Example:
Input:
6
10 20 30 20 40 20
20

Output:
3

Explanation:
Traverse the linked list from head to end. Each time a node's data matches the given key, increment a counter. After traversal, print the final count.
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
int count(int key)
{
    int count=0;
   
    s*temp=head;
    while(temp!=NULL)
    {
        if(temp->data == key)
        {
            count++;
        }
            temp=temp->next;
    }
    return count;
    
}

int main()
{
    int n,key;
    printf("Enter the no. of data:");
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        link();
    }
    print();
    printf("\nEnter the element whose occurence to be counted:");
    scanf("%d",&key);
    count(key);
    printf("%d",count(key));
    
    return 0;
}