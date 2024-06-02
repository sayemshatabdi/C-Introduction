#include<stdio.h>
#include<math.h>
int main()
{
    int r;
    scanf("%d",&r);
    int a[r][r];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<r;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    int sum=0;
    int sum2=0;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<r;j++)
        {
            if(i==j)
            {
                sum=sum+a[i][j];
            }
            else if(i+j==r-1)
            {
                sum2=sum2+a[i][j];
            }
            else
            {
                continue;
            }
        }
    }
    int result=abs(sum-sum2);
    printf("%d",result);
    return 0;
}