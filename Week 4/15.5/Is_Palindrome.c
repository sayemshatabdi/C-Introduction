#include<stdio.h>
#include<string.h>
int is_palindrome(char a[])
{
    int n=strlen(a);
    int cunt=1;
    for(int i=0;i<n;i++)
    {
        if(a[i]!=a[n-1-i])
        {
            cunt=0;
        }
    }
    return cunt;
}
int main()
{
    char a[100];
    scanf("%s",a);
    int s=is_palindrome(a);
    if(s>0)
    {
        printf("Palindrome");
    }
    else{
        printf("Not Palindrome");
    }
    return 0;
}