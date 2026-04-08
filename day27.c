/*Problem: Find Intersection Point of Two Linked Lists - Implement using linked list with dynamic memory allocation.

Input:
- First line: integer n
- Second line: n space-separated integers (first list)
- Third line: integer m
- Fourth line: m space-separated integers (second list)

Output:
- Print value of intersection node or 'No Intersection'

Example:
Input:
5
10 20 30 40 50
4
15 25 30 40 50

Output:
30

Explanation:
Calculate lengths, advance pointer in longer list, traverse both simultaneously. First common node is intersection.
*/
#include<stdio.h>
#include<stdlib.h>
typedef struct node 
{
    int data;
    struct node* next;
} s;
s* createNode(int data) 
{
    s* newnode = (s*)malloc(sizeof(s));
    newnode->data = data;
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
        temp = temp->next;
    temp->next = newnode;
    return head;
}
int findCommon(s* head1, s* head2) 
{
    while(head1 != NULL) 
    {
        s* temp = head2;
        while(temp != NULL) 
        {
            if(head1->data == temp->data) 
            {
                return head1->data;  
            }
            temp = temp->next;
        }
        head1 = head1->next;
    }

    return -1; 
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
    int n, m, x;
    s *head1 = NULL, *head2 = NULL;
    printf("Enter no. of data nodes for list 1:");
    scanf("%d", &n);
    for(int i = 0; i < n; i++) 
    {
        scanf("%d", &x);
        head1 = insert(head1, x);
    }
    printf("Enter no. of data nodes for list 2:");
    scanf("%d", &m);
    for(int i = 0; i < m; i++) {
        scanf("%d", &x);
        head2 = insert(head2, x);
    }
    int result = findCommon(head1, head2);
    if(result == -1)
        printf("No Intersection");
    else
        printf(" Intersection : %d", result);
    return 0;
}