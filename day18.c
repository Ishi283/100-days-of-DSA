/*Problem: Given an array of integers, rotate the array to the right by k positions.

Input:
- First line: integer n
- Second line: n integers
- Third line: integer k

Output:
- Print the rotated array

Example:
Input:
5
1 2 3 4 5
2

Output:
4 5 1 2 3
*/
#include<stdio.h>
int main()
{
  int n;
    printf("Enter size of an array:");
    scanf("%d",&n);
    int arr[n];
    printf("The elements are:");
for(int i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
int pos;
printf("Enter the position:");
scanf("%d",&pos);
pos=pos%n;
for(int i=0;i<pos;i++)
{
  int l=arr[n-1];
  for(int j=n-1;j>0;j--)
  {
    arr[j]=arr[j-1];
  }
  arr[0]=l;
}
for(int i=0;i<n;i++)
{
  printf("%d ",arr[i]);
}
return 0;
}