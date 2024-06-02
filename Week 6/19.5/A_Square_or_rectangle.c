#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n][2];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<2;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(int j=0;j<n;j++)
    {
            if(a[j][0]==a[j][1])
            {
                printf("Square");
            }
            else
            {
                printf("Rectangle");
            }
        printf("\n");
    }
    return 0;
}