#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int s=5+n/2;
    int k=1;
    int y=11+n/2;
    for(int i=0;i<y;i++)
    {
        if(i<y-5)
        {
        for(int j=s;j>=1;j--)
        {
            printf(" ");
        }
        for(int j=1;j<=k;j++)
        {
            printf("*");
        }
        printf("\n");
        s--;
        k=k+2;
        }
        else
        {
            for(int j=1;j<=5;j++)
            {
                printf(" ");
            }
            for(int j=1;j<=n;j++)
            {
                printf("*");
            }
            printf("\n");
        }
    }
    return 0;
}