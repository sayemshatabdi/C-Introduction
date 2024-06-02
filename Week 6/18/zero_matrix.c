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
    int cnt=0;
    int ele=r*c;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(a[i][j]==0)
            {
                cnt++;
            }
        }
    }
    if(cnt==ele)
    {
        printf("Zero Matrix");
    }
    else
    {
        printf("Not Zero Matrix");
    }

    return 0;
}