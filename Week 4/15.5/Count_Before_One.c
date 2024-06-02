#include<stdio.h>
int count_before_one(int a[],int n)
{
    int cunt=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]!=1)
        {
            cunt++;
        }
        else
        {
            break;
        }
    }
    return cunt;
}
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int s=count_before_one(a,n);
    printf("%d",s);
    return 0;
}