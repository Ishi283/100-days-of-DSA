/*Problem: Implement push and pop operations on a stack and verify stack operations.

Input:
- First line: integer n
- Second line: n integers to push
- Third line: integer m (number of pops)

Output:
- Print remaining stack elements from top to bottom

Example:
Input:
5
10 20 30 40 50
2

Output:
30 20 10
*/
#include <stdio.h>
#include <stdlib.h>
struct Node 
{
    int data;
    struct Node* next;
};
struct Node* top = NULL;
void push(int value) 
{
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = top;
    top = newNode;
}
void pop() 
{
    if (top == NULL) return;
    struct Node* temp = top;
    top = top->next;
    free(temp);
}
void print() 
{
    struct Node* temp = top;
    while (temp != NULL) 
    {
        printf("%d", temp->data);
        if (temp->next != NULL)
            printf(" ");
        temp = temp->next;
    }
}
int main() 
{
    int n, m, x;
    printf("Enter no. of elements to push:");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &x);
        push(x);
    }
    printf("Enter no. of elements to pop:");
    scanf("%d", &m);
    for (int i = 0; i < m; i++) 
    {
        pop();
    }
    print();
    return 0;
}