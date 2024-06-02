#include<stdio.h>
int main()
{
    for(int i=0;i<3;i++)
    {
        int n,m;
        scanf("%d %d",&n,&m);
        int sum=0;
        if(n>=m)
        {
            for(int j=m;j<=n;j++)
            {
                sum=sum+j;
                printf("%d ",j);
            }
            printf("sum =%d",sum);
            printf("\n");
        }
        if(n<=m)
        {
            for(int j=n;j<=m;j++)
            {
                sum=sum+j;
                printf("%d ",j);
            }
            printf("sum =%d",sum);
            printf("\n");
        }
        if(n<=0 || m<=0)
        {
            break;
        }

    }
    return 0;
}