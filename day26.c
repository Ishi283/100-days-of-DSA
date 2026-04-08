/*Problem: Doubly Linked List Insertion and Traversal - Implement using linked list with dynamic memory allocation.

Input:
- First line: integer n
- Second line: n space-separated integers

Output:
- Print the linked list elements in forward order, space-separated

Example:
Input:
5
10 20 30 40 50

Output:
10 20 30 40 50

Explanation:
Each node has data, next, prev. Insert nodes sequentially, traverse from head using next pointer.
*/
#include<stdio.h>
#include<stdlib.h>
typedef struct node 
{
    int data;
    struct node *prev;
    struct node *next;
} s;

s* createNode(int data) 
{
    s* newnode = (s*)malloc(sizeof(s));
    newnode->data = data;
    newnode->prev = NULL;
    newnode->next = NULL;
    return newnode;
}

s* insert(s* head, int data) 
{
    s* newnode = createNode(data);
    if(head == NULL)
        return newnode;
    s* temp = head;
    while(temp->next != NULL) 
    {
        temp = temp->next;
    }
    temp->next = newnode;
    newnode->prev = temp;
    return head;
}
void print(s* head) 
{
    s* temp = head;
    while(temp != NULL) 
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
}

int main() 
{
    int n, x;
    s* head = NULL;
    printf("Enter the no. of data nodes:");
    scanf("%d", &n);
    printf("Enter data:");
    for(int i = 0; i < n; i++) {
        scanf("%d", &x);
        head = insert(head, x);
    }
    print(head);
    return 0;
}