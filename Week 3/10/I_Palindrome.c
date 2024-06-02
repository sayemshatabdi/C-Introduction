#include<stdio.h>
#include<string.h>
int main()
{
    char a[1001];
    scanf("%s",a);
    int n=strlen(a);
    int flag=1;
    for(char i=0;i<n;i++)
    {
        if (a[i]!=a[n-1-i])
        {
            flag=0;
        }
    }
    if(flag==1)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}