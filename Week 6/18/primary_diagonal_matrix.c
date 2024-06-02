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
    int cunt=0;
    int ele=(r*c)-r;
    if(r!=c)
    {
        cunt=0;
    }
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(a[i][j]==0)
            {
                cunt++;
            }
            else if(i==j) 
            {
                continue;
            }    
        }
    }
    if(cunt==ele)
    {
        printf("Diagonal");
    }
    else
    {
        printf("Not Diagonal");
    }
    return 0;
}