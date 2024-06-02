#include<stdio.h>
void array(int *a,int n)
{
    for(int i=1;i<=n;i++)
    {
        if(i==n)
        {
            printf("%d",i);
        }
        else
        {
        printf("%d ",i);
        }
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    array(a,n);
    return 0;
}