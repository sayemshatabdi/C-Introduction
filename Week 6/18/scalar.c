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
    int cunt=1;
    if(r!=c)
    {
        cunt=0;
    }
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(i==j)
            {
                if(a[i][j]!=1)
                {
                    cunt=0;
                }
            }
            else if(a[i][j]!=0) 
            {
                cunt=0;
            }    
        }
    }
    if(cunt==1)
    {
        printf("Unit Matrix");
    }
    else
    {
        printf("Not Unit Matrix");
    }
    return 0;
}