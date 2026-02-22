/*

Problem: A system receives two separate logs of user arrival times from two different servers. Each log is already sorted in ascending order. Your task is to create a single chronological log that preserves the correct order of arrivals.

Input:
- First line: integer p (number of entries in server log 1)
- Second line: p sorted integers representing arrival times from server 1
- Third line: integer q (number of entries in server log 2)
- Fourth line: q sorted integers representing arrival times from server 2)

Output:
- Print a single line containing all arrival times in chronological order, separated by spaces

Example:
Input:
5
10 20 30 50 70
4
15 25 40 60

Output:
10 15 20 25 30 40 50 60 70

Explanation: Compare the next unprocessed arrival time from both logs and append the earlier one to the final log until all entries are processed
*/
#include<stdio.h>
int main()
{
    int n1,n2;
    int i,j;
    int arr1[50],arr2[50];
    printf("Enter size of 1st array:");
    scanf("%d",&n1);
    printf("Enter the elements:");
    for(i=0;i<n1;i++)
    {
        scanf("%d",&arr1[i]);
    }
    printf("1st array:");
    for(i=0;i<n1;i++)
    {
        printf(" %d",arr1[i]);
    }
    printf("\nEnter size of 2nd array:");
    scanf("%d",&n2);
    printf("Enter the elements:");
    for(i=0;i<n2;i++)
    {
        scanf("%d",&arr2[i]);
    }
    printf("2nd array:");
    for(i=0;i<n2;i++)
    {
        printf(" %d",arr2[i]);
    }
    int arr3[50];
    int n3=n1+n2;
    for(i=0;i<n1;i++)
    {
        arr3[i]=arr1[i];
    }
    for(j=0;j<n2;j++)
    {
        arr3[i+j]=arr2[j];
    }
    int temp;
    for(i=0;i<n3-1;i++)
    {
        for(j=i+1;j<n3;j++)
        {
            if(arr3[i]>arr3[j])
            {
                temp=arr3[i];
                arr3[i]=arr3[j];
                arr3[j]=temp;
            }
        }
    }
    printf("\nNew array:");
    for(i=0;i<n3;i++)
    {
        printf("%d ",arr3[i]);
    }
    return 0;
}