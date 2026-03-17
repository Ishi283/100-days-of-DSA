/*Problem: You are given a rectangular matrix of integers. Starting from the outer boundary, traverse the matrix in a clockwise manner and continue moving inward layer by layer until all elements are visited.

Input:
- First line: two integers r and c representing the number of rows and columns
- Next r lines: c integers each representing the matrix elements

Output:
- Print all visited elements in the order of traversal, separated by spaces

Example:
Input:
3 3
1 2 3
4 5 6
7 8 9

Output:
1 2 3 6 9 8 7 4 5

Explanation:
The traversal begins along the top row, proceeds down the rightmost column, then moves across the bottom row in reverse, and finally goes up the leftmost column. The same pattern repeats for the inner submatrix.

Test Cases:

Test Case 1:
Input:
2 3
1 2 3
4 5 6
Output:
1 2 3 6 5 4

Test Case 2:
Input:
3 1
7
8
9
Output:
7 8 9*/
#include<stdio.h>
int main()
{
    int n1,n2;
    printf("Enter the size of rows and columns:");
    scanf("%d %d",&n1,&n2);
    int arr[n1][n2];
    printf("enter the elements of array:");
    for(int i=0;i<n1;i++)
    {
        for(int j=0;j<n2;j++)
        {
        scanf("%d",&arr[i][j]);
        }
    }
    int b[100],c=0;
    for(int j=0;j<n2;j++)
    {
        b[c++]=arr[0][j];
    }
    for(int i=1;i<n1;i++)
    {
        b[c++]=arr[i][n2-1];
    }
    for(int j=n2-2;j>=0;j--)
    {
        b[c++]=arr[n1-1][j];
    }
    for(int i=n1-2;i>0;i--)
    {
        b[c++]=arr[i][0];
    }
    for(int i=0;i<n1;i++)
    {
        for(int j=0;j<n2;j++)
        {
            if(i!=0 && i!=n1-1 && j!=0 && j!=n2-1)
            {
                b[c++]=arr[i][j];
            }
        }
    }
    for(int i=0;i<c;i++)
    {
            printf("%d ",b[i]);
    }
    return 0;
}
