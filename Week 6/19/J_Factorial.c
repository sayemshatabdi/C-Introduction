#include<stdio.h>
long long int fun(long long int i)
{
    if(i==0) return 1;
    long long int ans=i * fun(i-1);
    return ans;
}
int main()
{
    long long int a;
    scanf("%lld",&a);
    long long int s=fun(a);
    printf("%lld",s);
    return 0;
}