/*Problem: Read a string and check if it is a palindrome using two-pointer comparison.

Input:
- Single line: string s

Output:
- Print YES if palindrome, otherwise NO

Example:
Input:
level

Output:
YES
*/
#include<stdio.h>
#include<string.h>
int main()
{
    char str[50],t[50];
    int temp;
    printf("Enter string:");
    scanf("%s",str);
    int l=strlen(str);
     strcpy(t,str);
    for(int i=0;i<l/2;i++)
    {
        temp=str[i];
        str[i]=str[l-i-1];
        str[l-i-1]=temp;
    }
    if(strcmp(t,str)== 0)
    {
      printf("YES");
    }
    else
    {
      printf("NO");
    }
    return 0;
}

