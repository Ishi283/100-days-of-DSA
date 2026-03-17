/*Problem: Write a program to check whether a given square matrix is an Identity Matrix. An identity matrix is a square matrix in which all diagonal elements are 1 and all non-diagonal elements are 0.

Input:
- First line: integer n representing number of rows and columns
- Next n lines: n integers each representing the matrix elements

Output:
- Print "Identity Matrix" if the matrix satisfies the condition
- Otherwise, print "Not an Identity Matrix"

Example:
Input:
3
1 0 0
0 1 0
0 0 1

Output:
Identity Matrix
*/
#include<stdio.h>
int main()
{
    int n1,n2;
    printf("Enter the size of rows and columns:");
    scanf("%d %d",&n1,&n2);
    int arr[n1][n2];
    if(n1!=n2)
    {
      printf("Not an identity matrix");
      return 0;
    }
    printf("enter the elements of array:");
    for(int i=0;i<n1;i++)
    {
        for(int j=0;j<n2;j++)
        {
        scanf("%d",&arr[i][j]);
        }
    }
    int c=1;
    for(int i=0;i<n1;i++)
    {
      for(int j=0;j<n2;j++)
      {
        if(i==j)
        {
          if(arr[i][j]!=1)
          {
            c=0;
            break;
          }
        }
        else
        {
          if(arr[i][j]!=0)
          {
            c=0;
            break;
          }
        }
      }
    }
    if(c==1)
    {
      printf("Identity matrix");
    }
    else
    {
      printf("Not an identity matrix");
    }
    return 0;
  }