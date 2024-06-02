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
    //exact column
    // int e=0;
    // for(int i=0;i<c;i++)
    // {
    //     printf("%d ",a[e][i]);
    // }
    int e=3;
    for(int i=0;i<r;i++)
    {
        printf("%d ",a[i][e]);
    }
    return 0;
}