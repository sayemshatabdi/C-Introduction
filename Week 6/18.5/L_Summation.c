#include<stdio.h>
long long int fun(long long int a[],int n,int i)
{
    if(i==n) return 0;
    long long int result=a[i]+fun(a,n,i+1);
    return result;
}
int main()
{
    int n;
    scanf("%d",&n);
    long long int a[n];
    for(long long int i=0;i<n;i++)
    {
        scanf("%lld",&a[i]);
    }
    long long int r=fun(a,n,0);
    printf("%lld",r);
    return 0;
}