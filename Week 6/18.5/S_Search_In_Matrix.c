#include<stdio.h>
#include<math.h>
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
    int k;
    scanf("%d",&k);
    int flag=0;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(a[i][j]==k)
            {
                flag=1;
                break;
            }
            else
            {
                continue;
            }
        }
    }
    if(flag>0)
    {
        printf("will not take number");
    }
    else
    {
        printf("will take number");
    }
    return 0;
}