#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    if(a>b)
    {
        for(int i=b;i<=a;i++)
        {
            if(i==4)
            printf("%d ",i);
            else if(i==7)
            printf("%d ",i);
            else if(i%10==4)
            printf("%d ",i);
            else if(i%10==7)
            printf("%d ",i);
            else
            printf("-1");
        }
    }
    if(a>b)
    {
        for(int i=a;i<=b;i++)
        {
            if(i==4)
            printf("%d ",i);
            if(i==7)
            printf("%d ",i);
            if(i%10==4)
            printf("%d ",i);
            if(i%10==7)
            printf("%d ",i);
        }
    }
    return 0;
}