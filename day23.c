/*Problem: Merge Two Sorted Linked Lists - Implement using linked list with dynamic memory allocation.

Input:
- First line: integer n
- Second line: n space-separated integers (first list)
- Third line: integer m
- Fourth line: m space-separated integers (second list)

Output:
- Print the merged linked list elements, space-separated

Example:
Input:
5
10 20 30 40 50
4
15 25 35 45

Output:
10 15 20 25 30 35 40 45 50

Explanation:
Compare nodes of both lists, append smaller to result, continue until all nodes are merged.
*/
#include<stdio.h>
#include<stdlib.h>

typedef struct node 
{
    int data;
    struct node *next;
} s;

s* createNode(int data) 
{
    s* newnode = (s*)malloc(sizeof(s));
    newnode->data = data;
    newnode->next = NULL;
    return newnode;
}

s* insert(s* head, int data) {
    s* newnode = createNode(data);
    if(head == NULL)
        return newnode;
    s* temp = head;
    while(temp->next != NULL)
        temp = temp->next;
    temp->next = newnode;
    return head;
}

s* merge(s* head1, s* head2) 
{
    s dummy;
    s* tail = &dummy;
    dummy.next = NULL;
    while(head1 && head2) 
    {
        if(head1->data < head2->data) 
        {
            tail->next = head1;
            head1 = head1->next;
        } 
        else 
        {
            tail->next = head2;
            head2 = head2->next;
        }
        tail = tail->next;
    }
    if(head1)
        tail->next = head1;
    else
        tail->next = head2;

    return dummy.next;
}
void print(s* head) 
{
    while(head != NULL) 
    {
        printf("%d ", head->data);
        head = head->next;
    }
}
int main() 
{
    int n1, n2, x;
    s *head1 = NULL, *head2 = NULL;
    printf("Enter no. of  data for list 1:");
    scanf("%d", &n1);
    for(int i = 0; i < n1; i++) {
        scanf("%d", &x);
        head1 = insert(head1, x);
    }
    printf("Enter no. of  data for list 2:");
    scanf("%d", &n2);
    for(int i = 0; i < n2; i++) {
        scanf("%d", &x);
        head2 = insert(head2, x);
    }
    s* result = merge(head1, head2);
    print(result);
    return 0;
}