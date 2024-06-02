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
    int flag=1;
    if(r==1 && c==1)
    {
        flag=1;
    }
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(i==j)
            {
                if(a[i][j]!=1)
                {
                    flag=0;
                }
                else
                {
                    continue;
                }
            }
            else if(i+j==r-1)
            {
                if(a[i][j]!=1)
                {
                    flag=0;
                }
            }
            else
            {
                if(a[i][j]>0)
                {
                    flag=0;
                }
            }
        }
    }
    if(flag>0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}