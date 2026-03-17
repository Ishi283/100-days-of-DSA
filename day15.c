/*Problem: Given a matrix, calculate the sum of its primary diagonal elements. The primary diagonal consists of elements where row index equals column index.

Input:
- First line: two integers m and n
- Next m lines: n integers each

Output:
- Print the sum of the primary diagonal elements

Example:
Input:
3 3
1 2 3
4 5 6
7 8 9

Output:
15

Explanation:
1 + 5 + 9 = 15
*/
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
    int sum=0;
    for(int i=0;i<n1;i++)
    {
        for(int j=0;j<n2;j++)
        {
            if(i==j)
            {
                sum = sum + arr[i][j];
            }
        }
    }
     printf("%d ",sum); 
         return 0;
}
