#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int flag=1;
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            flag=0;
        }
        else
        {
            continue;
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