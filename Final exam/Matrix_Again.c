#include<stdio.h>
int main()
{
    int r,c;
    scanf("%d %d",&r,&c);
    int a[r][c];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(int j=0;j<c;j++)
    {
        printf("%d ",a[r-1][j]);
    }
    printf("\n");
    for(int i=0;i<r;i++)
    {
        printf("%d ",a[i][c-1]);
    }
    return 0;
}